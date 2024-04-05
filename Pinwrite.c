#include<LPC214X.h>
void pinwrite(int pn,int pv){
if(pn<100){
IODIR0|=(0x01<<pn);
	if(pv==0){
IOCLR0|=(0x01<<pn);
}
else if(pv==1){
IOSET0|=(0x01<<pn);
}
}
else{
pn=pn-100;
IODIR1=(0x01<<pn);
if(pv==0){
IOCLR1|=(0x01<<pn);
}
else if(pv==1){
IOSET1|=(0x01<<pn);
}
}	
	}
int main(){
int pn=120,pv=1;
pinwrite(pn,pv);
}