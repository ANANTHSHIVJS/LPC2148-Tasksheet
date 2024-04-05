#include<LPC214X.h>
void pinwrite(int pn,int pv){
IODIR0|=(0x01<<15);//set direction as output
IODIR1|=(0x01<<15);//set direction as output
if(((pn>=0) || (pn<=31) &&(pv=1))){
//port0
IOSET0|=(0x01<<16);
}
else if(((pn>31) || (pn<100) && (pv=1))){
//port1
IOSET1|=(0x01<<16);
}
}
int main(){
int pn=16;
int pv=1;
pinwrite(pn,pv);
}