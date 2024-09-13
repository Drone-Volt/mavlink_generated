#pragma once
// MESSAGE OPEN_DRONE_ID_BROADCAST_CAPABILITIES PACKING

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES 12917


typedef struct __mavlink_open_drone_id_broadcast_capabilities_t {
 uint8_t target_system; /*<  System ID (0 for broadcast).*/
 uint8_t target_component; /*<  Component ID (0 for broadcast).*/
 uint8_t radio_function; /*<  The device is a transmitter, a receiver or both.*/
 uint8_t radio; /*<  Describes which radio types the device has (Bluetooth, WiFi).*/
 uint8_t radio_wifi_frequency_bands; /*<  Describes supported frequency bands of the WiFi radio(s).*/
 uint8_t radio_wifi_count; /*<  Describes how many (independent) WiFi radio(s) the device has.*/
 uint8_t commands_supported; /*<  Describes which OpenDroneID messages the device supports.*/
 uint8_t basic_id_max; /*<  Describes how many different basic IDs the device supports. The valid range is 1 to 4.*/
 uint8_t authentication_pages_max; /*<  Describes how many Authentication pages the device supports. Maximum value is 16.*/
} mavlink_open_drone_id_broadcast_capabilities_t;

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN 9
#define MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN 9
#define MAVLINK_MSG_ID_12917_LEN 9
#define MAVLINK_MSG_ID_12917_MIN_LEN 9

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC 155
#define MAVLINK_MSG_ID_12917_CRC 155



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_BROADCAST_CAPABILITIES { \
    12917, \
    "OPEN_DRONE_ID_BROADCAST_CAPABILITIES", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, target_component) }, \
         { "radio_function", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio_function) }, \
         { "radio", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio) }, \
         { "radio_wifi_frequency_bands", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio_wifi_frequency_bands) }, \
         { "radio_wifi_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio_wifi_count) }, \
         { "commands_supported", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, commands_supported) }, \
         { "basic_id_max", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, basic_id_max) }, \
         { "authentication_pages_max", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, authentication_pages_max) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_BROADCAST_CAPABILITIES { \
    "OPEN_DRONE_ID_BROADCAST_CAPABILITIES", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, target_component) }, \
         { "radio_function", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio_function) }, \
         { "radio", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio) }, \
         { "radio_wifi_frequency_bands", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio_wifi_frequency_bands) }, \
         { "radio_wifi_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, radio_wifi_count) }, \
         { "commands_supported", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, commands_supported) }, \
         { "basic_id_max", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, basic_id_max) }, \
         { "authentication_pages_max", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_open_drone_id_broadcast_capabilities_t, authentication_pages_max) }, \
         } \
}
#endif

/**
 * @brief Pack a open_drone_id_broadcast_capabilities message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID (0 for broadcast).
 * @param target_component  Component ID (0 for broadcast).
 * @param radio_function  The device is a transmitter, a receiver or both.
 * @param radio  Describes which radio types the device has (Bluetooth, WiFi).
 * @param radio_wifi_frequency_bands  Describes supported frequency bands of the WiFi radio(s).
 * @param radio_wifi_count  Describes how many (independent) WiFi radio(s) the device has.
 * @param commands_supported  Describes which OpenDroneID messages the device supports.
 * @param basic_id_max  Describes how many different basic IDs the device supports. The valid range is 1 to 4.
 * @param authentication_pages_max  Describes how many Authentication pages the device supports. Maximum value is 16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_open_drone_id_broadcast_capabilities_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t radio_function, uint8_t radio, uint8_t radio_wifi_frequency_bands, uint8_t radio_wifi_count, uint8_t commands_supported, uint8_t basic_id_max, uint8_t authentication_pages_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, radio_function);
    _mav_put_uint8_t(buf, 3, radio);
    _mav_put_uint8_t(buf, 4, radio_wifi_frequency_bands);
    _mav_put_uint8_t(buf, 5, radio_wifi_count);
    _mav_put_uint8_t(buf, 6, commands_supported);
    _mav_put_uint8_t(buf, 7, basic_id_max);
    _mav_put_uint8_t(buf, 8, authentication_pages_max);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#else
    mavlink_open_drone_id_broadcast_capabilities_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.radio_function = radio_function;
    packet.radio = radio;
    packet.radio_wifi_frequency_bands = radio_wifi_frequency_bands;
    packet.radio_wifi_count = radio_wifi_count;
    packet.commands_supported = commands_supported;
    packet.basic_id_max = basic_id_max;
    packet.authentication_pages_max = authentication_pages_max;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
}

/**
 * @brief Pack a open_drone_id_broadcast_capabilities message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID (0 for broadcast).
 * @param target_component  Component ID (0 for broadcast).
 * @param radio_function  The device is a transmitter, a receiver or both.
 * @param radio  Describes which radio types the device has (Bluetooth, WiFi).
 * @param radio_wifi_frequency_bands  Describes supported frequency bands of the WiFi radio(s).
 * @param radio_wifi_count  Describes how many (independent) WiFi radio(s) the device has.
 * @param commands_supported  Describes which OpenDroneID messages the device supports.
 * @param basic_id_max  Describes how many different basic IDs the device supports. The valid range is 1 to 4.
 * @param authentication_pages_max  Describes how many Authentication pages the device supports. Maximum value is 16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_open_drone_id_broadcast_capabilities_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t radio_function, uint8_t radio, uint8_t radio_wifi_frequency_bands, uint8_t radio_wifi_count, uint8_t commands_supported, uint8_t basic_id_max, uint8_t authentication_pages_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, radio_function);
    _mav_put_uint8_t(buf, 3, radio);
    _mav_put_uint8_t(buf, 4, radio_wifi_frequency_bands);
    _mav_put_uint8_t(buf, 5, radio_wifi_count);
    _mav_put_uint8_t(buf, 6, commands_supported);
    _mav_put_uint8_t(buf, 7, basic_id_max);
    _mav_put_uint8_t(buf, 8, authentication_pages_max);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#else
    mavlink_open_drone_id_broadcast_capabilities_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.radio_function = radio_function;
    packet.radio = radio;
    packet.radio_wifi_frequency_bands = radio_wifi_frequency_bands;
    packet.radio_wifi_count = radio_wifi_count;
    packet.commands_supported = commands_supported;
    packet.basic_id_max = basic_id_max;
    packet.authentication_pages_max = authentication_pages_max;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#endif
}

/**
 * @brief Pack a open_drone_id_broadcast_capabilities message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID (0 for broadcast).
 * @param target_component  Component ID (0 for broadcast).
 * @param radio_function  The device is a transmitter, a receiver or both.
 * @param radio  Describes which radio types the device has (Bluetooth, WiFi).
 * @param radio_wifi_frequency_bands  Describes supported frequency bands of the WiFi radio(s).
 * @param radio_wifi_count  Describes how many (independent) WiFi radio(s) the device has.
 * @param commands_supported  Describes which OpenDroneID messages the device supports.
 * @param basic_id_max  Describes how many different basic IDs the device supports. The valid range is 1 to 4.
 * @param authentication_pages_max  Describes how many Authentication pages the device supports. Maximum value is 16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_open_drone_id_broadcast_capabilities_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t radio_function,uint8_t radio,uint8_t radio_wifi_frequency_bands,uint8_t radio_wifi_count,uint8_t commands_supported,uint8_t basic_id_max,uint8_t authentication_pages_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, radio_function);
    _mav_put_uint8_t(buf, 3, radio);
    _mav_put_uint8_t(buf, 4, radio_wifi_frequency_bands);
    _mav_put_uint8_t(buf, 5, radio_wifi_count);
    _mav_put_uint8_t(buf, 6, commands_supported);
    _mav_put_uint8_t(buf, 7, basic_id_max);
    _mav_put_uint8_t(buf, 8, authentication_pages_max);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#else
    mavlink_open_drone_id_broadcast_capabilities_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.radio_function = radio_function;
    packet.radio = radio;
    packet.radio_wifi_frequency_bands = radio_wifi_frequency_bands;
    packet.radio_wifi_count = radio_wifi_count;
    packet.commands_supported = commands_supported;
    packet.basic_id_max = basic_id_max;
    packet.authentication_pages_max = authentication_pages_max;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
}

/**
 * @brief Encode a open_drone_id_broadcast_capabilities struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param open_drone_id_broadcast_capabilities C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_open_drone_id_broadcast_capabilities_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_open_drone_id_broadcast_capabilities_t* open_drone_id_broadcast_capabilities)
{
    return mavlink_msg_open_drone_id_broadcast_capabilities_pack(system_id, component_id, msg, open_drone_id_broadcast_capabilities->target_system, open_drone_id_broadcast_capabilities->target_component, open_drone_id_broadcast_capabilities->radio_function, open_drone_id_broadcast_capabilities->radio, open_drone_id_broadcast_capabilities->radio_wifi_frequency_bands, open_drone_id_broadcast_capabilities->radio_wifi_count, open_drone_id_broadcast_capabilities->commands_supported, open_drone_id_broadcast_capabilities->basic_id_max, open_drone_id_broadcast_capabilities->authentication_pages_max);
}

/**
 * @brief Encode a open_drone_id_broadcast_capabilities struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param open_drone_id_broadcast_capabilities C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_open_drone_id_broadcast_capabilities_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_open_drone_id_broadcast_capabilities_t* open_drone_id_broadcast_capabilities)
{
    return mavlink_msg_open_drone_id_broadcast_capabilities_pack_chan(system_id, component_id, chan, msg, open_drone_id_broadcast_capabilities->target_system, open_drone_id_broadcast_capabilities->target_component, open_drone_id_broadcast_capabilities->radio_function, open_drone_id_broadcast_capabilities->radio, open_drone_id_broadcast_capabilities->radio_wifi_frequency_bands, open_drone_id_broadcast_capabilities->radio_wifi_count, open_drone_id_broadcast_capabilities->commands_supported, open_drone_id_broadcast_capabilities->basic_id_max, open_drone_id_broadcast_capabilities->authentication_pages_max);
}

/**
 * @brief Encode a open_drone_id_broadcast_capabilities struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param open_drone_id_broadcast_capabilities C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_open_drone_id_broadcast_capabilities_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_open_drone_id_broadcast_capabilities_t* open_drone_id_broadcast_capabilities)
{
    return mavlink_msg_open_drone_id_broadcast_capabilities_pack_status(system_id, component_id, _status, msg,  open_drone_id_broadcast_capabilities->target_system, open_drone_id_broadcast_capabilities->target_component, open_drone_id_broadcast_capabilities->radio_function, open_drone_id_broadcast_capabilities->radio, open_drone_id_broadcast_capabilities->radio_wifi_frequency_bands, open_drone_id_broadcast_capabilities->radio_wifi_count, open_drone_id_broadcast_capabilities->commands_supported, open_drone_id_broadcast_capabilities->basic_id_max, open_drone_id_broadcast_capabilities->authentication_pages_max);
}

/**
 * @brief Send a open_drone_id_broadcast_capabilities message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID (0 for broadcast).
 * @param target_component  Component ID (0 for broadcast).
 * @param radio_function  The device is a transmitter, a receiver or both.
 * @param radio  Describes which radio types the device has (Bluetooth, WiFi).
 * @param radio_wifi_frequency_bands  Describes supported frequency bands of the WiFi radio(s).
 * @param radio_wifi_count  Describes how many (independent) WiFi radio(s) the device has.
 * @param commands_supported  Describes which OpenDroneID messages the device supports.
 * @param basic_id_max  Describes how many different basic IDs the device supports. The valid range is 1 to 4.
 * @param authentication_pages_max  Describes how many Authentication pages the device supports. Maximum value is 16.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_open_drone_id_broadcast_capabilities_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t radio_function, uint8_t radio, uint8_t radio_wifi_frequency_bands, uint8_t radio_wifi_count, uint8_t commands_supported, uint8_t basic_id_max, uint8_t authentication_pages_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, radio_function);
    _mav_put_uint8_t(buf, 3, radio);
    _mav_put_uint8_t(buf, 4, radio_wifi_frequency_bands);
    _mav_put_uint8_t(buf, 5, radio_wifi_count);
    _mav_put_uint8_t(buf, 6, commands_supported);
    _mav_put_uint8_t(buf, 7, basic_id_max);
    _mav_put_uint8_t(buf, 8, authentication_pages_max);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES, buf, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
#else
    mavlink_open_drone_id_broadcast_capabilities_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.radio_function = radio_function;
    packet.radio = radio;
    packet.radio_wifi_frequency_bands = radio_wifi_frequency_bands;
    packet.radio_wifi_count = radio_wifi_count;
    packet.commands_supported = commands_supported;
    packet.basic_id_max = basic_id_max;
    packet.authentication_pages_max = authentication_pages_max;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES, (const char *)&packet, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
#endif
}

/**
 * @brief Send a open_drone_id_broadcast_capabilities message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_open_drone_id_broadcast_capabilities_send_struct(mavlink_channel_t chan, const mavlink_open_drone_id_broadcast_capabilities_t* open_drone_id_broadcast_capabilities)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_open_drone_id_broadcast_capabilities_send(chan, open_drone_id_broadcast_capabilities->target_system, open_drone_id_broadcast_capabilities->target_component, open_drone_id_broadcast_capabilities->radio_function, open_drone_id_broadcast_capabilities->radio, open_drone_id_broadcast_capabilities->radio_wifi_frequency_bands, open_drone_id_broadcast_capabilities->radio_wifi_count, open_drone_id_broadcast_capabilities->commands_supported, open_drone_id_broadcast_capabilities->basic_id_max, open_drone_id_broadcast_capabilities->authentication_pages_max);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES, (const char *)open_drone_id_broadcast_capabilities, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_open_drone_id_broadcast_capabilities_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t radio_function, uint8_t radio, uint8_t radio_wifi_frequency_bands, uint8_t radio_wifi_count, uint8_t commands_supported, uint8_t basic_id_max, uint8_t authentication_pages_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, radio_function);
    _mav_put_uint8_t(buf, 3, radio);
    _mav_put_uint8_t(buf, 4, radio_wifi_frequency_bands);
    _mav_put_uint8_t(buf, 5, radio_wifi_count);
    _mav_put_uint8_t(buf, 6, commands_supported);
    _mav_put_uint8_t(buf, 7, basic_id_max);
    _mav_put_uint8_t(buf, 8, authentication_pages_max);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES, buf, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
#else
    mavlink_open_drone_id_broadcast_capabilities_t *packet = (mavlink_open_drone_id_broadcast_capabilities_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->radio_function = radio_function;
    packet->radio = radio;
    packet->radio_wifi_frequency_bands = radio_wifi_frequency_bands;
    packet->radio_wifi_count = radio_wifi_count;
    packet->commands_supported = commands_supported;
    packet->basic_id_max = basic_id_max;
    packet->authentication_pages_max = authentication_pages_max;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES, (const char *)packet, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_CRC);
#endif
}
#endif

#endif

// MESSAGE OPEN_DRONE_ID_BROADCAST_CAPABILITIES UNPACKING


/**
 * @brief Get field target_system from open_drone_id_broadcast_capabilities message
 *
 * @return  System ID (0 for broadcast).
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from open_drone_id_broadcast_capabilities message
 *
 * @return  Component ID (0 for broadcast).
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field radio_function from open_drone_id_broadcast_capabilities message
 *
 * @return  The device is a transmitter, a receiver or both.
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_radio_function(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field radio from open_drone_id_broadcast_capabilities message
 *
 * @return  Describes which radio types the device has (Bluetooth, WiFi).
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_radio(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field radio_wifi_frequency_bands from open_drone_id_broadcast_capabilities message
 *
 * @return  Describes supported frequency bands of the WiFi radio(s).
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_radio_wifi_frequency_bands(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field radio_wifi_count from open_drone_id_broadcast_capabilities message
 *
 * @return  Describes how many (independent) WiFi radio(s) the device has.
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_radio_wifi_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field commands_supported from open_drone_id_broadcast_capabilities message
 *
 * @return  Describes which OpenDroneID messages the device supports.
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_commands_supported(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field basic_id_max from open_drone_id_broadcast_capabilities message
 *
 * @return  Describes how many different basic IDs the device supports. The valid range is 1 to 4.
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_basic_id_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field authentication_pages_max from open_drone_id_broadcast_capabilities message
 *
 * @return  Describes how many Authentication pages the device supports. Maximum value is 16.
 */
static inline uint8_t mavlink_msg_open_drone_id_broadcast_capabilities_get_authentication_pages_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a open_drone_id_broadcast_capabilities message into a struct
 *
 * @param msg The message to decode
 * @param open_drone_id_broadcast_capabilities C-struct to decode the message contents into
 */
static inline void mavlink_msg_open_drone_id_broadcast_capabilities_decode(const mavlink_message_t* msg, mavlink_open_drone_id_broadcast_capabilities_t* open_drone_id_broadcast_capabilities)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    open_drone_id_broadcast_capabilities->target_system = mavlink_msg_open_drone_id_broadcast_capabilities_get_target_system(msg);
    open_drone_id_broadcast_capabilities->target_component = mavlink_msg_open_drone_id_broadcast_capabilities_get_target_component(msg);
    open_drone_id_broadcast_capabilities->radio_function = mavlink_msg_open_drone_id_broadcast_capabilities_get_radio_function(msg);
    open_drone_id_broadcast_capabilities->radio = mavlink_msg_open_drone_id_broadcast_capabilities_get_radio(msg);
    open_drone_id_broadcast_capabilities->radio_wifi_frequency_bands = mavlink_msg_open_drone_id_broadcast_capabilities_get_radio_wifi_frequency_bands(msg);
    open_drone_id_broadcast_capabilities->radio_wifi_count = mavlink_msg_open_drone_id_broadcast_capabilities_get_radio_wifi_count(msg);
    open_drone_id_broadcast_capabilities->commands_supported = mavlink_msg_open_drone_id_broadcast_capabilities_get_commands_supported(msg);
    open_drone_id_broadcast_capabilities->basic_id_max = mavlink_msg_open_drone_id_broadcast_capabilities_get_basic_id_max(msg);
    open_drone_id_broadcast_capabilities->authentication_pages_max = mavlink_msg_open_drone_id_broadcast_capabilities_get_authentication_pages_max(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN? msg->len : MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN;
        memset(open_drone_id_broadcast_capabilities, 0, MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_LEN);
    memcpy(open_drone_id_broadcast_capabilities, _MAV_PAYLOAD(msg), len);
#endif
}
