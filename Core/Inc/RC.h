#include "stm32f4xx_hal.h"

#define A1_GO 	(TIM1_BASE + 0x34UL)
#define A1_BACK 	(TIM1_BASE + 0x38UL)
#define B1_GO 	(TIM1_BASE + 0x3CUL)
#define B1_BACK 	(TIM1_BASE + 0x40UL)

void tim_forward(uint32_t *A_GO, uint32_t *A_BACK, uint32_t *B_GO, uint32_t *B_BACK);
void tim_stop(uint32_t *A_GO, uint32_t *A_BACK, uint32_t *B_GO, uint32_t *B_BACK);
void tim_right(uint32_t *A_GO, uint32_t *A_BACK, uint32_t *B_GO, uint32_t *B_BACK);


/*
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
  volatile unsigned int * CH1 = 0x40010000 + 0x34;
  volatile unsigned int * CH2 = 0x40010000 + 0x38;
  *CH1 = 0;
  *CH2 = 0;
  */



//void tim_forward(TIM_HandleTypeDef htim);

