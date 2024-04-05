#include<LPC214x.h>
#include "H:\My Project\Voltage Protection\GPIO(m).h"
#include "H:\My Project\Voltage Protection\LCD(m1).h"
#include "TIMER.h"
#include "UART.h"
int main ()
	{
	initUART();
	while(1)
		{
		sendUART('A');
		delayms(500);
	}
}