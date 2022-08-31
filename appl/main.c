#include "mcu_hw.h"
#include "SysCtr.h"
#include "port.h"
#include "Gpio.h"
#include "SysTick_cfg.h"


uint8 flage=0;
uint8 counter;

/**
user define

*/
uint8 onTime=5;   // on time
uint8 offTime=2;  // off time

int main()
{


    SysCtr_init();
    port_init();
		counter=offTime;
	  System_Tick_ms(1000);  //ms (1:1000)


    while(1)
    {

    }
}


void SysTick_Handler(void)
{

	//Gpio_FlipChannel( PF2);
	counter--;
	if(flage==1){

	    if(counter==0){
				counter=offTime-1;
			  Gpio_WriteChannel(PF2, STD_low);
				flage=0;
			}

	}else{
	if(counter==0){
				counter=onTime-1;
			  Gpio_WriteChannel(PF2, STD_high);
				flage=1;
			}


	}

}
