#include "stm32f4xx_hal.h"



/*void forward()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_LEFT_A1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_LEFT_A2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_RIGHT_B1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_RIGHT_B2_Pin, GPIO_PIN_RESET);
}
void stop() {
	HAL_GPIO_WritePin(GPIOA, GPIO_LEFT_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_LEFT_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_RIGHT_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_RIGHT_B2_Pin, GPIO_PIN_RESET);
}*/
void tim_forward(uint32_t *A_GO, uint32_t *A_BACK, uint32_t *B_GO, uint32_t *B_BACK){
	*A_GO = 21000;
	*A_BACK = 0;
	*B_GO = 21000;
	*B_BACK = 0;
}

void tim_stop(uint32_t *A_GO, uint32_t *A_BACK, uint32_t *B_GO, uint32_t *B_BACK){
	*A_GO = 0;
	*A_BACK = 0;
	*B_GO = 0;
	*B_BACK = 0;
}

void tim_right(uint32_t *A_GO, uint32_t *A_BACK, uint32_t *B_GO, uint32_t *B_BACK){
	*A_GO = 18000;
	*A_BACK = 0;
	*B_GO = 0;
	*B_BACK = 18000;
}

