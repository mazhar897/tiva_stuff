

/**
 * main.c
 */
#include <stdint.h>
#include <stdbool.h>
#include "Blocks/GPIO.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"


int main(void)
{
    // Enable the GPIO port that is used for the on-board LED.
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);


    // Check if the peripheral access is enabled.
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }
    uint32_t x = 0;

   x = x + 2;
    return 0;
}
