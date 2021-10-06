/*
 * Enum_Function_Codes.h
 *
 *  Created on: 7 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef COB_COB_ENUMS_ENUM_FUNCTION_CODES_H_
#define COB_COB_ENUMS_ENUM_FUNCTION_CODES_H_

typedef enum{
	NMT_FUNCTION_CODE = 0x0,
	SYNC_FUNCTION_CODE = 0x1,
	EMCY_FUNCTION_CODE = 0x1,
	TIME_FUNCTION_CODE = 0x2,
	PDO1_TRANSMIT_FUNCTION_CODE = 0x3,
	PDO1_RECEIVE_FUNCTION_CODE = 0x4,
	PDO2_TRANSMIT_FUNCTION_CODE = 0x5,
	PDO2_RECEIVE_FUNCTION_CODE = 0x6,
	PDO3_TRANSMIT_FUNCTION_CODE = 0x7,
	PDO3_RECEIVE_FUNCTION_CODE = 0x8,
	PDO4_TRANSMIT_FUNCTION_CODE = 0x9,
	PDO4_RECEIVE_FUNCTION_CODE = 0xA,
	SDO_TRANSMIT_FUNCTION_CODE = 0xB,
	SDO_RECEIVE_FUNCTION_CODE = 0xC,
	HEARTBEAT_FUNCTION_CODE = 0xD,
	NMT_EC_FUNCTION_CODE = 0xE,
	LSS_FUNCTION_CODE = 0xF
}ENUM_FUNCTION_CODES;

#endif /* COB_COB_ENUMS_ENUM_FUNCTION_CODES_H_ */