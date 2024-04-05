#include<LPC214X.h>
#include "LCD.h"
#include "GPIO.h"
int main(){
	IODIR1&=(~(0x01<<23));//set direction as input(SENSOR)
  IODIR1|=(0x01<<16);//set direction as output(LED PIN)
	while(1){
	if(((0x01<<16)&IOPIN1)==0){
		IOCLR0|=(0x01<<8);
	}
	else{
	IOSET0|=(0x01<<8);
	}
	}
}