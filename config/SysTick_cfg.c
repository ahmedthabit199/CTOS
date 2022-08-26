#include "mcu_hw.h"
#include "SysTick_cfg.h"

/*
	Reload =  (require delay / clock tim_period) - 1
  Reload = ( 1 / 1/16MHz) - 1 = 16000000 - 1 = 1599999
	*/

void System_Tick_ms(int t){
if(t<=1000){
  t=t*16000-1;


  	SysTickDelay->LOAD = t; // one second delay relaod value
  	SysTickDelay->CTRL = 7 ; // enable counter, interrupt and select system bus clock
  	SysTickDelay->VAL  = 0; //initialize current value register


}else{
	
    SysTickDelay->LOAD = 15999999; // one second delay relaod value
  	SysTickDelay->CTRL = 7 ; // enable counter, interrupt and select system bus clock
  	SysTickDelay->VAL  = 0; //initialize current value register

}

}
