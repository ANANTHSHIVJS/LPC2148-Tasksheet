#include<lpc214x.h>
#include "DCTIMER.h"
#include "DCGPIO.h"
int main() {
    VPBDIV = 0x01; // PCLK = 60MHz

    while(1) {
        /*Forward*/
        pinWrite(0, 1);  // IN1 = 1
        pinWrite(1, 0);  // IN2 = 0
        delay();
        /*Off*/
        pinWrite(0, 0);  // IN1 = 0
        pinWrite(1, 0);  // IN2 = 0
        delay();
        /*Reverse*/
        pinWrite(1, 1);  // IN2 = 1
        pinWrite(0, 0);  // IN1 = 0
        delay();
        /*Off*/
        pinWrite(0, 0);  // IN1 = 0
        pinWrite(1, 0);  // IN2 = 0
        delay();
    }
}