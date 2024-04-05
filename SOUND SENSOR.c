#include<lpc214x.h>
#include "LPGGPIO.h"
#include "LPGLCD.h"
#define GAS (IO1PIN & (1<<24))
unsigned int i;
void main()
{
    IO0DIR = 0xFFF;
    IO1DIR = 0x0;
    
    // Initialize LCD
    initLCD();
    
    // Display initial message
    LCDcommand(0x80); // Set cursor to line 1
    LCDprint("START ");

    while(1)
    {
        if(GAS)
        {
            LCDclear();
            LCDprint("SOUND Detected");
        }
        delay();
        delay();
        LCDclear();
    }
}