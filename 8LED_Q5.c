//4LED Down Counter
#include<LPC214X.h>
void delay();
int main(){
	IODIR0|=(0x01<<15);//set direction as output
	IODIR0|=(0x01<<16);//set direction as output
	IODIR0|=(0x01<<17);//set direction as output
	IODIR0|=(0x01<<18);//set direction as output
  IODIR0|=(0x01<<19);//set direction as output
	IODIR0|=(0x01<<20);//set direction as output
	IODIR0|=(0x01<<21);//set direction as output
	IODIR0|=(0x01<<22);//set direction as output
	while(1){
	//1111
    IOSET0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//1110
    IOSET0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//1101
    IOSET0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//1100
    IOSET0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//1011
    IOSET0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//1010
    IOSET0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//1001	
	  IOSET0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//1000
    IOSET0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//0111
    IOCLR0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//0110
    IOCLR0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//0101	
    IOCLR0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//0100
    IOCLR0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//0011
    IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//0010
    IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//0001
		IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
//0000
		IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();		
	}
}	
void delay(){
unsigned int i;
	for(i=0;i<200000;i++){
	}
}