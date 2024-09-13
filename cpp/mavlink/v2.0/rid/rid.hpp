/** @file
 *	@brief MAVLink comm protocol generated from rid.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace rid {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 1> MESSAGE_ENTRIES {{ {12917, 155, 9, 9, 3, 0, 1} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 2;


// ENUM DEFINITIONS


/** @brief Flags controlling the radio mode(s) of the OpenDroneID device (bitmask) */
enum class MAV_ODID_RADIO_MODE
{
    NO_CHANGE=1, /* No change in radio transmit/receive mode of OpenDroneID packets. | */
    BLE_LEGACY=2, /* Transmit and/or receive OpenDroneID Bluetooth Low Energy legacy packets. | */
    BLE_LONG_RANGE=4, /* Transmit and/or receive OpenDroneID Bluetooth Low Energy long range packets. | */
    WIFI_NAN=8, /* Transmit and/or receive OpenDroneID WiFi Neighbor Awareness Network packets. | */
    WIFI_BEACON=16, /* Transmit and/or receive OpenDroneID WiFi Beacon packets. | */
};

//! MAV_ODID_RADIO_MODE ENUM_END
constexpr auto MAV_ODID_RADIO_MODE_ENUM_END = 17;

/** @brief  */
enum class MAV_ODID_RADIO_CONTROL
{
    NO_CHANGE=0, /* No change in broadcast mode of OpenDroneID device. | */
    START=1, /* Start transmitting/receiving OpenDroneID packets. | */
    STOP=2, /* Stop transmitting/receiving OpenDroneID packets. | */
    RESET=3, /* Resets/reboots the OpenDroneID radio. | */
};

//! MAV_ODID_RADIO_CONTROL ENUM_END
constexpr auto MAV_ODID_RADIO_CONTROL_ENUM_END = 4;

/** @brief Set the region of the RemoteID transmitter. */
enum class MAV_ODID_REGION
{
    NO_CHANGE=0, /* No change to the configured region. | */
    USA=1, /* Set the region to the USA. | */
    EU=2, /* Set the region to the EU. | */
    OTHER=3, /* Set the region to the rest of the world, minimum checks | */
};

//! MAV_ODID_REGION ENUM_END
constexpr auto MAV_ODID_REGION_ENUM_END = 4;

/** @brief  */
enum class MAV_ODID_RADIO_FUNCTION : uint8_t
{
    NA=0, /* The device has no OpenDroneID functionality or it is unknown. | */
    TRANSMITTER=1, /* The device is an OpenDroneID transmitter. | */
    RECEIVER=2, /* The device is an OpenDroneID receiver. | */
    TRANSCEIVER=3, /* The device is both an OpenDroneID transmitter and receiver. | */
};

//! MAV_ODID_RADIO_FUNCTION ENUM_END
constexpr auto MAV_ODID_RADIO_FUNCTION_ENUM_END = 4;

/** @brief Describes which radios the device has (bitmask) */
enum class MAV_ODID_RADIO_TYPES : uint8_t
{
    BLUETOOTH_LEGACY=1, /* The device has Bluetooth legacy (4.x) radio support. | */
    BLUETOOTH_LONG_RANGE=2, /* The device has Bluetooth long range radio support. | */
    WIFI_NAN=4, /* The device has support for WiFi Neighbor Awareness Network. | */
    WIFI_BEACON=8, /* The device has support for WiFi Beacon. | */
};

//! MAV_ODID_RADIO_TYPES ENUM_END
constexpr auto MAV_ODID_RADIO_TYPES_ENUM_END = 9;

/** @brief Describes the specifications of the WiFi radio(s) (bitmask) */
enum class MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS : uint8_t
{
    NONE=1, /* The device does not have a WiFi radio. | */
    BANDS_2_4GHZ=2, /* The device has a WiFi radio that supports the 2.4 GHz. | */
    BANDS_5GHZ=4, /* The device has a WiFi radio that supports the 5 GHz. | */
};

//! MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS ENUM_END
constexpr auto MAV_ODID_RADIO_WIFI_SUPPORTED_FREQUENCY_BANDS_ENUM_END = 5;

/** @brief Describes which OpenDroneID messages the device supports (bitmask) */
enum class MAV_ODID_MESSAGES_SUPPORTED : uint8_t
{
    BASIC_ID=1, /* The device supports OpenDroneID Basic ID messages. | */
    LOCATION=2, /* The device supports OpenDroneID Location messages. | */
    AUTHENTICATION=4, /* The device supports OpenDroneID Authentication messages. | */
    SELF_ID=8, /* The device supports OpenDroneID Self ID messages. | */
    SYSTEM=16, /* The device supports OpenDroneID System ID messages. | */
    OPERATOR_ID=32, /* The device supports OpenDroneID Operator ID messages. | */
    MESSAGE_PACK=64, /* The device supports OpenDroneID Message Pack messages. | */
    CONTROL=128, /* The device supports OpenDroneID Control messages. | */
};

//! MAV_ODID_MESSAGES_SUPPORTED ENUM_END
constexpr auto MAV_ODID_MESSAGES_SUPPORTED_ENUM_END = 129;


} // namespace rid
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_open_drone_id_broadcast_capabilities.hpp"

// base include

