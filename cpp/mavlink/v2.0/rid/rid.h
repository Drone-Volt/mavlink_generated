/** @file
 *  @brief MAVLink comm protocol generated from rid.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_RID_H
#define MAVLINK_RID_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_RID.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_RID_XML_HASH -631455265800713091

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{12917, 155, 9, 9, 3, 0, 1}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_RID

// ENUM DEFINITIONS


/** @brief Flags controlling the radio mode(s) of the OpenDroneID device (bitmask) */
#ifndef HAVE_ENUM_MAV_ODID_RADIO_MODE
#define HAVE_ENUM_MAV_ODID_RADIO_MODE
typedef enum MAV_ODID_RADIO_MODE
{
   MAV_ODID_RADIO_MODE_NO_CHANGE=1, /* No change in radio transmit/receive mode of OpenDroneID packets. | */
   MAV_ODID_RADIO_MODE_BLE_LEGACY=2, /* Transmit and/or receive OpenDroneID Bluetooth Low Energy legacy packets. | */
   MAV_ODID_RADIO_MODE_BLE_LONG_RANGE=4, /* Transmit and/or receive OpenDroneID Bluetooth Low Energy long range packets. | */
   MAV_ODID_RADIO_MODE_WIFI_NAN=8, /* Transmit and/or receive OpenDroneID WiFi Neighbor Awareness Network packets. | */
   MAV_ODID_RADIO_MODE_WIFI_BEACON=16, /* Transmit and/or receive OpenDroneID WiFi Beacon packets. | */
   MAV_ODID_RADIO_MODE_ENUM_END=17, /*  | */
} MAV_ODID_RADIO_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_ODID_RADIO_CONTROL
#define HAVE_ENUM_MAV_ODID_RADIO_CONTROL
typedef enum MAV_ODID_RADIO_CONTROL
{
   MAV_ODID_RADIO_CONTROL_NO_CHANGE=0, /* No change in broadcast mode of OpenDroneID device. | */
   MAV_ODID_RADIO_CONTROL_START=1, /* Start transmitting/receiving OpenDroneID packets. | */
   MAV_ODID_RADIO_CONTROL_STOP=2, /* Stop transmitting/receiving OpenDroneID packets. | */
   MAV_ODID_RADIO_CONTROL_RESET=3, /* Resets/reboots the OpenDroneID radio. | */
   MAV_ODID_RADIO_CONTROL_ENUM_END=4, /*  | */
} MAV_ODID_RADIO_CONTROL;
#endif

/** @brief Set the region of the RemoteID transmitter. */
#ifndef HAVE_ENUM_MAV_ODID_REGION
#define HAVE_ENUM_MAV_ODID_REGION
typedef enum MAV_ODID_REGION
{
   MAV_ODID_REGION_NO_CHANGE=0, /* No change to the configured region. | */
   MAV_ODID_REGION_USA=1, /* Set the region to the USA. | */
   MAV_ODID_REGION_EU=2, /* Set the region to the EU. | */
   MAV_ODID_REGION_OTHER=3, /* Set the region to the rest of the world, minimum checks | */
   MAV_ODID_REGION_ENUM_END=4, /*  | */
} MAV_ODID_REGION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_ODID_RADIO_FUNCTION
#define HAVE_ENUM_MAV_ODID_RADIO_FUNCTION
typedef enum MAV_ODID_RADIO_FUNCTION
{
   MAV_ODID_RADIO_FUNCTION_NA=0, /* The device has no OpenDroneID functionality or it is unknown. | */
   MAV_ODID_RADIO_FUNCTION_TRANSMITTER=1, /* The device is an OpenDroneID transmitter. | */
   MAV_ODID_RADIO_FUNCTION_RECEIVER=2, /* The device is an OpenDroneID receiver. | */
   MAV_ODID_RADIO_FUNCTION_TRANSCEIVER=3, /* The device is both an OpenDroneID transmitter and receiver. | */
   MAV_ODID_RADIO_FUNCTION_ENUM_END=4, /*  | */
} MAV_ODID_RADIO_FUNCTION;
#endif

/** @brief Describes which radios the device has (bitmask) */
#ifndef HAVE_ENUM_MAV_ODID_RADIO_TYPES
#define HAVE_ENUM_MAV_ODID_RADIO_TYPES
typedef enum MAV_ODID_RADIO_TYPES
{
   MAV_ODID_RADIO_TYPES_BLUETOOTH_LEGACY=1, /* The device has Bluetooth legacy (4.x) radio support. | */
   MAV_ODID_RADIO_TYPES_BLUETOOTH_LONG_RANGE=2, /* The device has Bluetooth long range radio support. | */
   MAV_ODID_RADIO_TYPES_WIFI_NAN=4, /* The device has support for WiFi Neighbor Awareness Network. | */
   MAV_ODID_RADIO_TYPES_WIFI_BEACON=8, /* The device has support for WiFi Beacon. | */
   MAV_ODID_RADIO_TYPES_ENUM_END=9, /*  | */
} MAV_ODID_RADIO_TYPES;
#endif

/** @brief Describes the specifications of the WiFi radio(s) (bitmask) */
#ifndef HAVE_ENUM_MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS
#define HAVE_ENUM_MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS
typedef enum MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS
{
   MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS_NONE=1, /* The device does not have a WiFi radio. | */
   MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS_2_4GHZ=2, /* The device has a WiFi radio that supports the 2.4 GHz. | */
   MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS_5GHZ=4, /* The device has a WiFi radio that supports the 5 GHz. | */
   MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS_ENUM_END=5, /*  | */
} MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS;
#endif

/** @brief Describes which OpenDroneID messages the device supports (bitmask) */
#ifndef HAVE_ENUM_MAV_ODID_MESSAGES_SUPPORTED
#define HAVE_ENUM_MAV_ODID_MESSAGES_SUPPORTED
typedef enum MAV_ODID_MESSAGES_SUPPORTED
{
   MAV_ODID_MESSAGES_SUPPORTED_BASIC_ID=1, /* The device supports OpenDroneID Basic ID messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_LOCATION=2, /* The device supports OpenDroneID Location messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_AUTHENTICATION=4, /* The device supports OpenDroneID Authentication messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_SELF_ID=8, /* The device supports OpenDroneID Self ID messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_SYSTEM=16, /* The device supports OpenDroneID System ID messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_OPERATOR_ID=32, /* The device supports OpenDroneID Operator ID messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_MESSAGE_PACK=64, /* The device supports OpenDroneID Message Pack messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_CONTROL=128, /* The device supports OpenDroneID Control messages. | */
   MAV_ODID_MESSAGES_SUPPORTED_ENUM_END=129, /*  | */
} MAV_ODID_MESSAGES_SUPPORTED;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_open_drone_id_broadcast_capabilities.h"

// base include



#if MAVLINK_RID_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_BROADCAST_CAPABILITIES}
# define MAVLINK_MESSAGE_NAMES {{ "OPEN_DRONE_ID_BROADCAST_CAPABILITIES", 12917 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_RID_H
