#include<LPC214X.h>
void delay();
int main(){
	IODIR0|=(0x01<<15);//set direction as output
	IODIR0|=(0x01<<16);//set direction as output
	IODIR0|=(0x01<<17);//set direction as output
	IODIR0|=(0x01<<18);//set direction as output
	while(1){
//a
    IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//b
    IOSET0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//c
    IOCLR0|=(0x01<<15);
		IOSET0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//d
    IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOSET0|=(0x01<<17);
		IOCLR0|=(0x01<<18);		
	  delay();
//e
    IOCLR0|=(0x01<<15);
		IOCLR0|=(0x01<<16);
		IOCLR0|=(0x01<<17);
		IOSET0|=(0x01<<18);		
	  delay();
		}
}	
void delay(){
unsigned int i;
	for(i=0;i<200000;i++){
	}
}