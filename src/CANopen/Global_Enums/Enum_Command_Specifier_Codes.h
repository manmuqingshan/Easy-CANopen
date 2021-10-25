/*
 * Enum_Command_Specifier_Codes.h
 *
 *  Created on: 9 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_ENUMS_ENUM_CS_CODES_H_
#define CANOPEN_ENUMS_ENUM_CS_CODES_H_

enum {
	/* SDO commands */
	CS_SDO_CLIENT_UPLOAD = 0x60,
	CS_SDO_SERVER_DOWNLOAD = 0x40,
	CS_SDO_CLIENT_RESPONDS_DATA_UNKNOWN = 0x42,
	CS_SDO_CLIENT_RESPONDS_BYTES_4 = 0x43,
	CS_SDO_CLIENT_RESPONDS_BYTES_3 = 0x47,
	CS_SDO_CLIENT_RESPONDS_BYTES_2 = 0x4B,
	CS_SDO_CLIENT_RESPONDS_BYTES_1 = 0x4F,
	CS_SDO_SERVER_WRITE_DATA_UNKNOWN = 0x22,
	CS_SDO_SERVER_WRITE_DATA_4 = 0x23,
	CS_SDO_SERVER_WRITE_DATA_3 = 0x27,
	CS_SDO_SERVER_WRITE_DATA_2 = 0x2B,
	CS_SDO_SERVER_WRITE_DATA_1 = 0x2F,

	/* NMT commands */
	// TODO: NETWORK_MANAGMENT måste bli NMT
	CS_NETWORK_MANAGMENT_SERVICE_START_REMOTE_NODE = 0x1,
	CS_NETWORK_MANAGMENT_SERVICE_STOP_REMOTE_NODE = 0x2,
	CS_NETWORK_MANAGMENT_SERVICE_ENTER_PRE_OPERATIONAL = 0x80,
	CS_NETWORK_MANAGMENT_SERVICE_RESET_NODE = 0x81,
	CS_NETWORK_MANAGMENT_SERVICE_RESET_COMMUNICATION = 0x82,

	/* Enable or disable the LSS service */
	// TODO: Lägg in _LSS också
	CS_SWITCH_MODE_GLOBAL = 0x4,

	/* Set the identification values */
	CS_SWITCH_MODE_SELECTIVE_VENDOR_ID = 0x40,
	CS_SWITCH_MODE_SELECTIVE_PRODUCT_CODE = 0x41,
	CS_SWITCH_MODE_SELECTIVE_REVISION_NUMBER = 0x42,
	CS_SWITCH_MODE_SELECTIVE_SERIAL_NUMBER = 0x43,
	CS_SWITCH_MODE_SELECTIVE = CS_SWITCH_MODE_SELECTIVE_VENDOR_ID | CS_SWITCH_MODE_SELECTIVE_PRODUCT_CODE | CS_SWITCH_MODE_SELECTIVE_REVISION_NUMBER | CS_SWITCH_MODE_SELECTIVE_SERIAL_NUMBER,
	CS_SWITCH_MODE_SELECTIVE_RESPONSE = 0x44,

	/* Let the node itself find identify it self */
	CS_IDENTIFY_REMOTE_SLAVE_VENDOR_ID = 0x46,
	CS_IDENTIFY_REMOTE_SLAVE_PRODUCT_CODE = 0x47,
	CS_IDENTIFY_REMOTE_SLAVE_REVISION_NUMBER_LOW = 0x48,
	CS_IDENTIFY_REMOTE_SLAVE_REVISION_NUMBER_HIGH = 0x49,
	CS_IDENTIFY_REMOTE_SLAVE_SERIAL_NUMBER_LOW = 0x4A,
	CS_IDENTIFY_REMOTE_SLAVE_SERIAL_NUMBER_HIGH = 0x4B,
	CS_IDENTIFY_REMOTE_SLAVE = CS_IDENTIFY_REMOTE_SLAVE_VENDOR_ID | CS_IDENTIFY_REMOTE_SLAVE_PRODUCT_CODE | CS_IDENTIFY_REMOTE_SLAVE_REVISION_NUMBER_LOW | CS_IDENTIFY_REMOTE_SLAVE_REVISION_NUMBER_HIGH | CS_IDENTIFY_REMOTE_SLAVE_SERIAL_NUMBER_LOW | CS_IDENTIFY_REMOTE_SLAVE_SERIAL_NUMBER_HIGH,
	CS_IDENTIFY_REMOTE_SLAVE_CONFIGURED_RESPONSE = 0x4F,

	/* Check if there are nodes on the error address */
	CS_IDENTIFY_REMOTE_SLAVE_NON_CONFIGURED = 0x4C,
	CS_IDENTIFY_REMOTE_SLAVE_NON_CONFIGURED_RESPONSE = 0x50,

	/* Set the node address */
	CS_CONFIGURE_NODE_ID = 0x11,

	/* Baud rate */
	CS_CONFIGURE_BIT_TIMING_PARAMETERS = 0x13,
	CS_ACTIVATE_BIT_TIMING_PARAMETERS = 0x15,

	/* Store the identification values */
	CS_STORE_CONFIGURATION_PROTOCOL = 0x17,

	/* Ask for a identification value */
	CS_INQUIRE_IDENTITY_VENDOR_ID = 0x5A,
	CS_INQUIRE_IDENTITY_PRODUCT_CODE = 0x5B,
	CS_INQUIRE_IDENTITY_REVISION_NUMBER = 0x5C,
	CS_INQUIRE_IDENTITY_SERIAL_NUMBER = 0x5D,
	CS_INQUIRE_IDENTITY_NODE_ID = 0x5F,
	CS_INQUIRE_IDENTITY = CS_INQUIRE_IDENTITY_VENDOR_ID | CS_INQUIRE_IDENTITY_PRODUCT_CODE | CS_INQUIRE_IDENTITY_REVISION_NUMBER | CS_INQUIRE_IDENTITY_SERIAL_NUMBER | CS_INQUIRE_IDENTITY_NODE_ID
};

#endif /* CANOPEN_ENUMS_ENUM_CS_CODES_H_ */
