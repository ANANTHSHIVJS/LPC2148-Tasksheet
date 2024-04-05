#include<LPC214X.h>
void portwrite(int pn,int pv){
if(pn<10){
IODIR0|=(pv<<pn*8);
	if(pv==0){
IOCLR0|=(0xff<<pn*8);
}
else if(pv==1){
IOSET0|=(pv<<pn*8);
}
}
else{
pn=pn-10;
IODIR1=(pv<<pn*8);
if(pv==0){
IOCLR1|=(0xff<<pn*8);
}
else if(pv==1){
IOSET1|=(pv<<pn*8);
}
}	
	}
int main(){
int pn=3,pv=1;
portwrite(pn,pv);
}