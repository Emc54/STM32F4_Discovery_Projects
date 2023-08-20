/*
 * Thermo13.h
 *
 *  Created on: Aug 17, 2023
 *      Author: Emilios Christou
 */

#ifndef INC_THERMO13_H_
#define INC_THERMO13_H_

/**
 *\brief Calculates the temperature from the raw bytes.
 * \param rxBuffer: A two byte buffer with the raw received temp data
 */
float calc_temp(uint8_t *rxBuffer);

#endif /* INC_THERMO13_H_ */
