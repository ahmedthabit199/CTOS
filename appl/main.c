#include "mcu_hw.h"
#include "SysCtr.h"
#include "port.h"
#include "Gpio.h"
#include "SysTick_cfg.h"
#include "nvic_cfg.h"

uint8 flage=0;
uint8 setOnflage=0;
uint8 curr_btn1_flage=0;
uint8 counter;
uint8 prv_btn1_state=1;

uint8 setOff_flage=0;
uint8 curr_btn2_flage=0;
uint8 counter;
uint8 prv_btn2_state=1;

uint8 On_Off_flage=0;

/**
user define throuh button 1 & 2 

*/
uint8 onTime=0;   // on time
uint8 offTime=0;  // off time


int main()
{
	
	
	SysCtr_init();
	NVIC_init();
	counter=offTime;   
	
	
    port_init();	
  

    while(1)
    {
			
			while(On_Off_flage < 5 ){
			
			
			  curr_btn1_flage = Gpio_ReadChannel(PA3);
					// if button is pressed (time Off - time On)
					// then increment counter 
					if (curr_btn1_flage == 1 && prv_btn1_state == 0)
					{
						On_Off_flage++;
					}
					// previous button state becomes the most recent state
					prv_btn1_state = curr_btn1_flage;
			
				curr_btn2_flage = Gpio_ReadChannel(PA4);
					// if button is pressed (counter)
					// then increment counter 
					if (curr_btn2_flage == 1 && prv_btn2_state == 0)
					{
						setOff_flage++;
						setOnflage++;
					}
					// previous button state 
					prv_btn2_state = curr_btn2_flage;		
				
					
				if(	On_Off_flage == 2 ){
					
				onTime=setOff_flage;
				if(onTime==0)onTime++;
				setOnflage=0;
				On_Off_flage++;
				}
				
				if(	On_Off_flage == 4 && setOnflage>0 ){
				offTime=setOnflage;
				counter=offTime;
				On_Off_flage++;
					
				System_Tick_ms(1000);  //ms (1:1000)
				}					
			}	
				
    }
}


void SysTick_Handler(void)
{

	counter--;
	if(flage==1){

	    if(counter==0){
				counter=offTime-1;
			  Gpio_WriteChannel(PB5, STD_low);
				flage=0;
			}

	}else{
	if(counter==0){
				counter=onTime-1;
			  Gpio_WriteChannel(PB5, STD_high);
				flage=1;
			}
	}

}
