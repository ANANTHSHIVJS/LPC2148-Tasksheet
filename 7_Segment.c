#include<LPC214x.h>
void delay();
int main(){
while(1){
//IODIR1&=(~(0x01<<16));//set direction as input(MAINS)
IODIR0|=(0x01<<3);//set direction as output(A)
IODIR0|=(0x01<<4);//set direction as output(B)
IODIR0|=(0x01<<5);//set direction as output(C)
IODIR0|=(0x01<<6);//set direction as output(D)
IODIR0|=(0x01<<7);//set direction as output(E)
IODIR0|=(0x01<<8);//set direction as output(F)
IODIR0|=(0x01<<9);//set direction as output(G)
//0
IOSET0|=(0x01<<3)|(0x01<<4)|(0x01<<5)|(0x01<<6)|(0x01<<7)|(0x01<<8);
IOCLR0|=(0x01<<9);
delay();
	//1
IOSET0|=(0x01<<4)|(0x01<<5);
IOCLR0|=(0x01<<3)|(0x01<<6)|(0x01<<7)|(0x01<<8)|(0x01<<9);
delay();
//2
IOSET0|=(0x01<<3)|(0x01<<4)|(0x01<<9)|(0x01<<7)|(0x01<<6);
IOCLR0|=(0x01<<5)|(0x01<<8);
delay();
//3
IOSET0|=(0x01<<3)|(0x01<<4)|(0x01<<9)|(0x01<<5)|(0x01<<6);
IOCLR0|=(0x01<<7)|(0x01<<8);
delay();
//4
IOSET0|=(0x01<<5)|(0x01<<8)|(0x01<<9)|(0x01<<4);
IOCLR0|=(0x01<<3)|(0x01<<6)|(0x01<<7);
delay();
//5
IOSET0|=(0x01<<3)|(0x01<<8)|(0x01<<9)|(0x01<<5)|(0x01<<6);
IOCLR0|=(0x01<<4)|(0x01<<7);
delay();
//6
IOSET0|=(0x01<<3)|(0x01<<5)|(0x01<<6)|(0x01<<7)|(0x01<<8)|(0x01<<9);
IOCLR0|=(0x01<<4);
delay();
//7
IOSET0|=(0x01<<4)|(0x01<<5)|(0x01<<3);
IOCLR0|=(0x01<<6)|(0x01<<7)|(0x01<<8)|(0x01<<9);
delay();
//8
IOSET0|=(0xffffffff);
delay();
//9
IOSET0|=(0x01<<3)|(0x01<<8)|(0x01<<9)|(0x01<<4)|(0x01<<5);
IOCLR0|=(0x01<<6)|(0x01<<7);
delay();
}
}
void delay(){
unsigned int i;
for(i=0;i<100000;i++){
	}
}