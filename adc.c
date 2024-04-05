#include<stdio.h>
#include "H:\My Project\VP\lcd.h"
#include "H:\My Project\VP\adc.h"
int main(){
	unsigned int x;
	float voltage;
	char volt[18];
    IODIR1 = 0xffffffff;
    IODIR0 = 0x00000000;
	  IODIR1 |= (1 << 16);
    PINSEL0 = 0x0300;
    VPBDIV = 0x02;
    lcd_init();
	while(1){
	ss:
	AD1CR |= (1 << 21); //power down (PDN = 1)
	AD1CR |= 0x01 << 24; //start conversion 
	while((AD1GDR &(0x01<<31))==0);//if the 3st bit becomes 1, the conversion is done.
	x = AD1GDR;
	x = (x>>6)& 0x000003ff; //extracting values from 15 to 6 bits of the AD1GDR
	voltage = ( (x/1023.0) * 3.3 ); // Convert ADC value to equivalent voltage 

		if(voltage>15){
		show("Voltage:");
		cmd(0x8B);
		cmd(0xC0);
		show("Status:OVER");	
		IOSET1|=(0x01<<16);
    goto ss;
		}
		else if(voltage<10){
		show("Voltage:");
		cmd(0x8B);
		cmd(0xC0);
		show("Status:UNDER");	
		IOSET1|=(0x01<<16);
    goto ss;
		}
		else if(10>voltage && voltage<15){
		show("Voltage:");
		cmd(0x8B);
		cmd(0xC0);
		show("Status:NORMAL");
		goto ss;	
    }
		}
}