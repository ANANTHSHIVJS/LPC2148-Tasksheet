//8LED Q2
#include<LPC214X.h>
void delay();
int main(){
	int i=5,count=0;
	IODIR0|=(0x01<<15);//set direction as output
	IODIR0|=(0x01<<16);//set direction as output
	IODIR0|=(0x01<<17);//set direction as output
	IODIR0|=(0x01<<18);//set direction as output
	IODIR0|=(0x01<<19);//set direction as output
	IODIR0|=(0x01<<20);//set direction as output
	IODIR0|=(0x01<<21);//set direction as output
	IODIR0|=(0x01<<22);//set direction as output
	while(i){
	IOSET0|=(0x01<<15);
	delay();
	IOCLR0|=(0x01<<15);
	delay();
  count++;	
	i++;
	if(count==5){
	break;
	}
	}
	/*
	while(i){
	IOSET0|=(0x01<<16);
	delay();
	IOCLR0|=(0x01<<16);
	delay();
	i++;
	}
	while(i){
	IOSET0|=(0x01<<17);
	delay();
	IOCLR0|=(0x01<<17);
	delay();
	i++;
	}
	while(i){
	IOSET0|=(0x01<<18);
	delay();
	IOCLR0|=(0x01<<18);
	delay();
	i++;
	}
	while(i){
	IOSET0|=(0x01<<19);
	delay();
	IOCLR0|=(0x01<<19);
	delay();
	
	i++;
	}
	while(i){
	IOSET0|=(0x01<<20);
	delay();
	IOCLR0|=(0x01<<20);
	delay();
	i++;
	}
	while(i){
	IOSET0|=(0x01<<21);
	delay();
	IOCLR0|=(0x01<<21);
	delay();
	i++;
	}
	while(i){
	IOSET0|=(0x01<<22);
	delay();
	IOCLR0|=(0x01<<22);
	delay();
	i++;
	}
	*/
	}	
void delay(){
unsigned int i;
	for(i=0;i<20000;i++){
	}
}
	