#include "mcu_hw.h"
#include "SysCtr.h"
#include "port.h"
#include "Gpio.h"
#include "SysTick_cfg.h"

int main()
{
	
	
    SysCtr_init();
    port_init();
	  System_Tick_ms(1000);  //ms (1:1000)

	
    while(1)
    {

    }
}


void SysTick_Handler(void)
{
   
	Gpio_FlipChannel( PF2);
  
}


