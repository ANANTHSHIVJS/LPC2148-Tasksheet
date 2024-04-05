//SLS
#include<LPC214x.h>
void delay();
int main(){
while(1){
IODIR0|=(0x01<<3);//set direction as output(A)
IODIR0|=(0x01<<4);//set direction as output(B)
IODIR0|=(0x01<<5);//set direction as output(C)
IODIR0|=(0x01<<6);//set direction as output(D)
IODIR0|=(0x01<<7);//set direction as output(E)
IODIR0|=(0x01<<8);//set direction as output(F)
IODIR0|=(0x01<<9);//set direction as output(G)

IODIR0|=(0x01<<10);//set direction as output(A)
IODIR0|=(0x01<<11);//set direction as output(B)
IODIR0|=(0x01<<12);//set direction as output(C)
IODIR0|=(0x01<<13);//set direction as output(D)
IODIR0|=(0x01<<14);//set direction as output(E)
IODIR0|=(0x01<<15);//set direction as output(F)
IODIR0|=(0x01<<16);//set direction as output(G)
	
IODIR0|=(0x01<<17);//set direction as output(A)
IODIR0|=(0x01<<18);//set direction as output(B)
IODIR0|=(0x01<<19);//set direction as output(C)
IODIR0|=(0x01<<20);//set direction as output(D)
IODIR0|=(0x01<<21);//set direction as output(E)
IODIR0|=(0x01<<22);//set direction as output(F)
IODIR0|=(0x01<<23);//set direction as output(G)

IODIR1|=(0x01<<24);//set direction as output(A)
IODIR1|=(0x01<<25);//set direction as output(B)
IODIR1|=(0x01<<26);//set direction as output(C)
IODIR1|=(0x01<<27);//set direction as output(D)
IODIR1|=(0x01<<28);//set direction as output(E)
IODIR1|=(0x01<<29);//set direction as output(F)
IODIR1|=(0x01<<30);//set direction as output(G)

IODIR1|=(0x01<<17);//set direction as output(A)
IODIR1|=(0x01<<18);//set direction as output(B)
IODIR1|=(0x01<<19);//set direction as output(C)
IODIR1|=(0x01<<20);//set direction as output(D)
IODIR1|=(0x01<<21);//set direction as output(E)
IODIR1|=(0x01<<22);//set direction as output(F)
IODIR1|=(0x01<<23);//set direction as output(G)
//S
IOSET0|=(0x01<<3)|(0x01<<8)|(0x01<<9)|(0x01<<5)|(0x01<<6);
//H
IOSET0|=(0x01<<15)|(0x01<<14)|(0x01<<11)|(0x01<<12)|(0x01<<16);
//I
IOSET0|=(0x01<<18)|(0x01<<19);
//V
IOSET1|=(0x01<<25)|(0x01<<26)|(0x01<<27)|(0x01<<28)|(0x01<<29);
//A
IOSET1|=(0x01<<17)|(0x01<<18)|(0x01<<19)|(0x01<<21)|(0x01<<22)|(0x01<<23);
//clear
IOCLR0|=(0xffffffff);
IOCLR1|=(0xffffffff);
delay();
//L
IOSET0|=(0x01<<8)|(0x01<<7)|(0x01<<6);
//O
IOSET0|=(0x01<<10)|(0x01<<11)|(0x01<<12)|(0x01<<13)|(0x01<<14)|(0x01<<15);
}
}
void delay(){
unsigned int i;
for(i=0;i<100000;i++){
	}
}