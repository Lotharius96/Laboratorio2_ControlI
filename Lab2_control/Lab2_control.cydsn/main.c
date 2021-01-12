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
#include "stdio.h"
const uint8 sinewave[]={
 78,   84,   90,   96,  102,  107,  112,  117,  120,  123,  126,  127,  128,  128,  127,  126,
 123,  120,  117,  112,  107,  102,   96,   90,   84,   78,   72,   66,   60,   54,   49,   44,
 39,   36,   33,   30,   29,   28,   28,   29,   30,   33,   36,   39,   44,   49,   54,   60,
 66,   72,   78
};
const unsigned int delayFreq[] =
{
163, 140, 120, 100, 81,
60, 40, 32, 28, 23,
16, 14, 12, 10, 8
};
uint8 index_t=0;
double count_speed = 0;
double pos_init = 0;
unsigned long sample_time = 0;
//const int signal1 = 2;
//const int signal2 = 5;
double angular_speed = 0;
double pos_motor = 0;
unsigned tau=162; //el periodo de una muestra
unsigned int pwmFloats=0;
unsigned long time_ref, time_back = 0; //tiempo ahorita, tiempo atras
unsigned int flag_giro1 = 1;
unsigned long time=0;
unsigned int flag_giro2 = 0;
int flag_time,state = 0;
double y=0;
char data_message[40];
//Las funciones van aqui

double ConvertPosition();
void ConvertSpeed(double pos1, double pos2, unsigned t1, unsigned t2);
///Aqui va la parte de la interrupicion de 3 ms


CY_ISR(contaSignal) {
  int flag_tmp=flag_time;
  if ( sensorA_Read()== 1) {
    count_speed++; //cuenta cada pulso
    flag_time = sensorB_Read();

  }

 sensorA_ClearInterrupt();
  //  delay(1);

}


CY_ISR(Timer_ISR){ //AL SEGUNDO
 
  time+=4; 
   double pos_tmp = pos_motor;
  //sample_time = time_ref;
  pos_motor = ConvertPosition();
  if (pos_motor != pos_tmp) {
    sample_time=time_ref;
    time_ref=time;
    //if((time_ref-sample_time)!=0){
    ConvertSpeed(pos_motor, pos_tmp, time_ref, sample_time);
    if(angular_speed <20 && angular_speed>-20){
      y=0.904*y+0.09564*angular_speed;
      
   }else{
     y=y;
    }
  }
  sprintf(data_message,"%lu\t%.2f\n",time,y);
  UART_1_PutString(data_message);  
  isr_Timer_ClearPending();
}

double ConvertPosition() {
  double base_mpos, mpos = 0;
  int k = (flag_time == 1) ? -1 : 1;
  base_mpos = (count_speed / 360);
  if (count_speed / 75 < 1) {
    mpos = 2 * 3.1416 * (4.8 * base_mpos);
  } else {
    count_speed = 0;
  }
  if (state == 1) {
    pos_init = mpos;

  }
  mpos=pos_init+k*mpos;
  return mpos;
}


void setPwm(int index){
     uint8 value=sinewave[index];
     PWM_WriteCompare(value); 
    

}
void ConvertSpeed(double pos1, double pos2, unsigned t1, unsigned t2) {
  //double angular_spt = 0;
  if((t1-t2)!=0){
  angular_speed = (pos1 - pos2) * 1000 / (t1 - t2);
  } 
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
   
    isr_Timer_StartEx(Timer_ISR);
    isr_Vueltas_StartEx(contaSignal);
    //isr_Timer(Timer_ISR);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Timer_Start(); 
    PWM_Start();
    UART_1_Start();
 
    giro1_Write(1);
    giro2_Write(0);
    for(;;)
    {
        // UART_1_PutChar(pwmFloats);
         unsigned int pwmVal=sinewave[pwmFloats];
         CyDelay(delayFreq[0]);
         
        setPwm(pwmVal); 
        UART_1_PutChar(pwmVal);
        if(pwmFloats>=50){
           pwmFloats=0;
        }else{
            pwmFloats++;
         }
           //Aqui comienza la parte del control
    
  
  //retardo d eun milisegundo
  //time_back++;
 
 

 
   
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
