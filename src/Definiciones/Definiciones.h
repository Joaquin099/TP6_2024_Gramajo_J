#ifndef DEFINICIONES_DEFINICIONES_H_
#define DEFINICIONES_DEFINICIONES_H_

#include "stm32f4xx.h"

typedef	struct {
	char Key;
	uint16_t Temp;
	uint16_t u16_DAC;
	uint8_t Key_Press;
	uint32_t u32_Systick;
	uint16_t u16_Sys_Time;
} General;

#endif /* DEFINICIONES_DEFINICIONES_H_ */
