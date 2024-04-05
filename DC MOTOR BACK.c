#include<lpc214x.h>
#include "DCBTIMER.h"
#include "DCBGPIO.h"
int main() {
    VPBDIV = 0x01; // PCLK = 60MHz
	while(1) {
	pinWrite(1, 1);  // IN2 = 1
        pinWrite(0, 0);  // IN1 = 0
        delay();
        /*Off*/
        pinWrite(0, 0);  // IN1 = 0
        pinWrite(1, 0);  // IN2 = 0
        delay();
    }
}