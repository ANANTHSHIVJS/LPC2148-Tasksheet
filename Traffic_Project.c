#include<LPC214x.h>
void delay();
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as input(MAINS)
IODIR1&=(~(0x01<<17));//set direction as input(CROSS)
IODIR0|=(0x01<<4);//set direction as output(RED)
IODIR0|=(0x01<<5);//set direction as output(YELLOW)
IODIR0|=(0x01<<6);//set direction as output(GREEN)
IOSET0|=(0x01<<4);
if(((0x01<<16)&IOPIN1)==0){
IOCLR0|=(0x01<<4);	
IOSET0|=(0x01<<6);
IOCLR0|=(0x01<<6);
IOSET0|=(0x01<<6);
delay();
IOCLR0|=(0x01<<6);
IOSET0|=(0x01<<5);	
delay();
IOCLR0|=(0x01<<5);	
}	

else if(((0x01<<17)&IOPIN1)==0){
IOCLR0|=(0x01<<4);	
IOSET0|=(0x01<<6);
IOCLR0|=(0x01<<6);
IOSET0|=(0x01<<6);
delay();
IOCLR0|=(0x01<<6);
IOSET0|=(0x01<<5);	
delay();
IOCLR0|=(0x01<<5);
}
else{
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);
}
}
}
void delay(){
unsigned int i;
for(i=0;i<200000;i++){
	}
}