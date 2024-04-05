//8LED Q1
#include<LPC214X.h>
int main(){
	IODIR0|=(0x01<<8);//set direction as output
  while(1){
	IOSET0|=(0x01<<8);
}
}	

	