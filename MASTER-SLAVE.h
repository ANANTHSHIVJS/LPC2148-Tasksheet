//SPI MAIN
void SPI_Master_Init()
{
	PINSEL0 = PINSEL0 | 0x00001500; /* Select P0.4, P0.5, P0.6, P0.7 as SCK0, MISO0, MOSI0 and GPIO */
	S0SPCR = 0x0020; /* SPI Master mode, 8-bit data, SPI0 mode */
	S0SPCCR = 0x10; /* Even number, minimum value 8, pre scalar for SPI Clock */
}
void SPI0_SLAVE_INIT( void )
{ 
		DDRB = DDRB | (1<<MISO);	/* Make MISO pin output */										
		DDRB &= ~( (1<<MOSI) | (1<<SCK) | (1<<SS) );	/* Make MOSI, SCK and SS pins as inputs. */															
		SPCR = (1<<SPE);     /* Enable SPI */
}
void SPI_Master_Write(char data)
{
	char flush;
	IO0CLR = (1<<7);  /* SSEL = 0, enable SPI communication with slave */
	S0SPDR = data;  /* Load data to be written into the data register */
	while ( (S0SPSR & 0x80) == 0 );  /* Wait till data transmission is completed */
	flush = S0SPDR;
	IO0SET = (1<<7);  /* SSEL = 1, disable SPI communication with slave */
}
char SPI_Master_Read()
{
	IO0CLR = (1<<7);  /* SSEL = 0, enable SPI communication with slave */
	S0SPDR = 0xFF;  /* Transmit Flush byte */
	while ( (S0SPSR & 0x80) == 0 );  /* Wait till data transmission is completed */
	IO0SET = (1<<7);  /* SSEL = 1, disable SPI communication with slave */
	return S0SPDR;  /* Return the data received */
}
void SPI_SLAVE_WRITE_CHAR(char ch)
{
	char flush;
	SPDR = ch; /* Load data to be written into the data register */
	while(!(SPSR & (1<<SPIF))); /* Wait till data transmission is completed */
	flush = SPDR; /* Return the data received */
}
unsigned char SPI_SLAVE_READ_CHAR()
{
	while(!(SPSR & (1<<SPIF))); /* Wait till data reception is completed */
	return SPDR;
}