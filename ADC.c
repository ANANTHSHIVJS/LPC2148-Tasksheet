//ADC
#include <lpc214x.h>
#include <stdint.h>
#include "H:\My Project\New folder\LCD.h"
#include "H:\My Project\New folder\LCDM.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	uint32_t result;
	float voltage;
	char volt[18];
	IODIR1|=(0x01<<16);//set direction as output
	IODIR0&=(~(0x01<<28));//set direction as input
	LCD_Init();
	PINSEL1 = 0x01000000; // P0.28 as AD0.1 
  AD0CR = 0x00200402; // ADC operational, 10-bits, 11 clocks for conversion 
	while(1)
	{
		ss:
		AD0CR = AD0CR | (1<<24); // Start Conversion 
		while ( !(AD0DR1 & 0x80000000) ); // Wait till DONE 
		result = AD0DR1;
		result = (result>>6);
		result = (result & 0x000003FF);
		voltage = ( (result/1023.0) * 3.3 ); // Convert ADC value to equivalent voltage 
		
		if(voltage>15){
		sprintf(volt, "Voltage=%.2f V  ",voltage);
		LCD_Command(0x80);
		LCD_String(volt);
		LCD_Command(0xC0);
		LCD_String("Status : OVER");	
		IOSET1|=(0x01<<16);
    goto ss;
		}
		else if(voltage<10){
		sprintf(volt, "Voltage=%.2f V  ", voltage);
		LCD_Command(0x80);
		LCD_String(volt);
		LCD_Command(0xC0);
		LCD_String("Status : UNDER");
		IOSET1|=(0x01<<16);
    goto ss;
		}
		else if(10>voltage<15){
		sprintf(volt, "Voltage=%.2f V  ", voltage);
		LCD_Command(0x80);
		LCD_String(volt);
		LCD_Command(0xC0);
		LCD_String("Status : NORMAL");
		goto ss;
		}
		memset(volt, 0, 18);
	}
}

