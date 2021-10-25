/*
 * Enum_object_dictionary_Codes.h
 *
 *  Created on: 13 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_ENUMS_ENUM_OBJECT_DICTIONARY_CODES_H_
#define CANOPEN_ENUMS_ENUM_OBJECT_DICTIONARY_CODES_H_

typedef enum{
	OD_ACCESS_READ = 0x1,
	OD_ACCESS_WRITE = 0x2,
	OD_ACCESS_READ_WRITE = OD_ACCESS_READ | OD_ACCESS_WRITE
}OD_ACCESS;

enum{
	OD_DATA_TYPE_U8 = 0x3,
	OD_DATA_TYPE_U16 = 0x2,
	OD_DATA_TYPE_U32 = 0x0
};

typedef enum{
    OD_STATUS_OK,
    OD_STATUS_NOT_PERMITTED,
	OD_STATUS_NOT_FOUND,
	OD_STATUS_WRONG_DATA_TYPE
}OD_STATUS;

enum {
	/* Communication parameter area */
	OD_INDEX_DEVICE_TYPE = 0x1000,
	OD_INDEX_ERROR_REGISTER = 0x1001,
	OD_INDEX_MANUFACTURER_STATUS_REGISTER = 0x1002,
	OD_INDEX_PRE_DEFINED_ERROR_FIELD = 0x1003,
	OD_INDEX_COB_ID_SYNC_MESSAGE = 0x1005,
	OD_INDEX_COMMUNICATION_CYCLE_PERIOD = 0x1006,
	OD_INDEX_SYNCHRONOUS_WINDOW_LENGTH = 0x1007,
	OD_INDEX_MANUFACTURER_DEVICE_NAME = 0x1008,
	OD_INDEX_MANUFACTURER_HARDWARE_VERSION = 0x1009,
	OD_INDEX_MANUFACTURER_SOFTWARE_VERSION = 0x100A,
	OD_INDEX_GUARD_TIME_MS = 0x100C,
	OD_INDEX_LIFE_FACTOR = 0x100D,
	OD_INDEX_STORE_PARAMETERS = 0x1010,
	OD_INDEX_RESTORE_DEFAULT_PARAMETERS = 0x1011,
	OD_INDEX_COB_ID_TIME_STAMP_OBJECT = 0x1012,
	OD_INDEX_HIGH_RESOLUTION_TIME_STAMP = 0x1013,
	OD_INDEX_COB_ID_EMCY = 0x1014,
	OD_INDEX_INHIBIT_TIME_EMCY = 0x1015,
	OD_INDEX_CONSUMER_HEARTBEAT_TIME = 0x1016,
	OD_INDEX_PRODUCER_HEARTBEAT_TIME = 0x1017,
	OD_INDEX_IDENTITY_OBJECT = 0x1018,
	OD_INDEX_SYNCHRONOUS_COUNTER_OVERFLOW_VALUE = 0x1019,
	OD_INDEX_VERIFY_CONFIGURATION = 0x1020,
	OD_INDEX_EMERGENCY_CONSUMER_OBJECT = 0x1028,
	OD_INDEX_ERROR_BEHAVIOR_OBJECT = 0x1029,
};

#endif /* CANOPEN_ENUMS_ENUM_OBJECT_DICTIONARY_CODES_H_ */
