#include <lpc214x.h>
#include "LDRGPIO.h"
#include "LDRLCD.h"
#include "LDRADC.h"
#define LED (1U << 31)
#define bit(x) (1 << x)
int main() {
    IO1DIR = 0xFFFFFFFF;
    IO0DIR = 0x80000000;

    // Configure P0.27 for ADC functionality
    PINSEL1 |= (0x01 << 22); // Select ADC function for P0.27

    VPBDIV = 0x02;

    initLCD(); // Initialize LCD

    while (1) {
        LCDclear(); // Clear LCD screen
        LCDsetcursor(0, 0); // Set cursor to first row, first column
        adc(0, 27); // Read ADC value from channel 27 (P0.27)

        if (val > 800) {
            LCDprint("LIGHT INT : LOW ");
            IO0SET = LED;
        } else {
            LCDprint("LIGHT INT : HIGH");
            IO0CLR = LED;
        }
    }
}
