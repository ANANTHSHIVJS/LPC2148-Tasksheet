//SWITCH Q1
#include<LPC214X.h>
int main(){
while(1){
	int x=0;
IODIR1&=(~(0x01<<21));//set direction as input
IODIR0|=(0x01<<15);//set direction as output
IODIR0|=(0x01<<16);//set direction as output
IODIR0|=(0x01<<17);//set direction as output
IODIR0|=(0x01<<18);//set direction as output
//if((0x01<<21)&IOPIN1==1){
	while(1){
	if(x&0x01){
  IOSET0|=(0x01<<15);
	}
  else{
  IOCLR0|=(0x01<<15);
	}
	if(x&0x01<<1){
	IOSET0|=(0x01<<16);
	}
  else{
	IOCLR0|=(0x01<<16);	
	}
  if(x&0x01<<2){
	IOSET0|=(0x01<<17);
	}
  else{
	IOCLR0|=(0x01<<17);	
	}
  if(x&0x01<<3){
	IOSET0|=(0x01<<18);
	}
  else{
	IOCLR0|=(0x01<<18);	
	}
	x++;
//}
}
}	
}	
