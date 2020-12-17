/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

const uint8 sinewave[]={
 78,   84,   90,   96,  102,  107,  112,  117,  120,  123,  126,  127,  128,  128,  127,  126,
 123,  120,  117,  112,  107,  102,   96,   90,   84,   78,   72,   66,   60,   54,   49,   44,
 39,   36,   33,   30,   29,   28,   28,   29,   30,   33,   36,   39,   44,   49,   54,   60,
 66,   72,   78
};
uint8 index_t=0;
void setPwm(int index){
     uint8 value=sinewave[index];
     PWM_WriteCompare(value); 
     giro1_Write(1);
     giro2_Write(0);

}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_Start();
    for(;;)
    {
         setPwm(index_t);
         CyDelay(164);
        if(index_t>=51){
           index_t=0;
        }else{
           index_t++;
        }
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
