//SWITCH Q1
#include<LPC214X.h>
int main(){
	while(1){
IODIR1&=(~(0x01<<21));//set direction as input
IODIR0|=(0x01<<15);//set direction as output
//IOCLR0|=(0x01<<15);
if((0x01<<21)&IOPIN1==1){
IOCLR0^=(0x01<<15);
}
	else{
IOSET0^=(0x01<<15);
	}
}	
}	
                                              