/*
 * datatoMMXU.h
 *
 *  Created on: 20.04.2017
 *      Author: sagok
 */

#ifndef DATATOMMXU_H_
#define DATATOMMXU_H_

#define sqrt3	1.7320508075688772935274463415059

#define		DbPercent		100000		// 0,001%

float	GetRealU(uint16_t	Currdata, uint16_t	ktn);
float	GetRealP(float	Currdata, uint16_t	ktn,  uint16_t	Ittf);

void	Set_MMXU	(uint8_t num, uint64_t currentTime );
void	Set_MMXN	(uint8_t num, uint64_t currentTime );

#endif /* DATATOMMXU_H_ */
