/*
 * Enum_Baudrate_Codes.h
 *
 *  Created on: 9 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_ENUMS_ENUM_BAUDRATE_CODES_H_
#define CANOPEN_ENUMS_ENUM_BAUDRATE_CODES_H_

/* Each baudrate is definied with unit kB/s */
enum{
	BAUDRATE_1000_TABLE_INDEX_0 = 0x0,
	BAUDRATE_800_TABLE_INDEX_1 = 0x1,
	BAUDRATE_500_TABLE_INDEX_2 = 0x2,
	BAUDRATE_250_TABLE_INDEX_3 = 0x3,
	BAUDRATE_125_TABLE_INDEX_4 = 0x4,
	BAUDRATE_100_TABLE_INDEX_5 = 0x5,
	BAUDRATE_50_TABLE_INDEX_6 = 0x6,
	BAUDRATE_20_TABLE_INDEX_7 = 0x7,
	BAUDRATE_10_TABLE_INDEX_8 = 0x8,
};

#endif /* CANOPEN_ENUMS_ENUM_BAUDRATE_CODES_H_ */