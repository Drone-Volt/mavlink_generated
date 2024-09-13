// MESSAGE OPEN_DRONE_ID_BROADCAST_CAPABILITIES support class

#pragma once

namespace mavlink {
namespace rid {
namespace msg {

/**
 * @brief OPEN_DRONE_ID_BROADCAST_CAPABILITIES message
 *
 * A message for an OpenDroneID device to declare its capabilities to a controlling MAVLink device(s) (e.g. a flight controller, GCS etc.).
 */
struct OPEN_DRONE_ID_BROADCAST_CAPABILITIES : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12917;
    static constexpr size_t LENGTH = 9;
    static constexpr size_t MIN_LENGTH = 9;
    static constexpr uint8_t CRC_EXTRA = 155;
    static constexpr auto NAME = "OPEN_DRONE_ID_BROADCAST_CAPABILITIES";


    uint8_t target_system; /*<  System ID (0 for broadcast). */
    uint8_t target_component; /*<  Component ID (0 for broadcast). */
    uint8_t radio_function; /*<  The device is a transmitter, a receiver or both. */
    uint8_t radio; /*<  Describes which radio types the device has (Bluetooth, WiFi). */
    uint8_t radio_wifi_frequency_bands; /*<  Describes supported frequency bands of the WiFi radio(s). */
    uint8_t radio_wifi_count; /*<  Describes how many (independent) WiFi radio(s) the device has. */
    uint8_t commands_supported; /*<  Describes which OpenDroneID messages the device supports. */
    uint8_t basic_id_max; /*<  Describes how many different basic IDs the device supports. The valid range is 1 to 4. */
    uint8_t authentication_pages_max; /*<  Describes how many Authentication pages the device supports. Maximum value is 16. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  radio_function: " << +radio_function << std::endl;
        ss << "  radio: " << +radio << std::endl;
        ss << "  radio_wifi_frequency_bands: " << +radio_wifi_frequency_bands << std::endl;
        ss << "  radio_wifi_count: " << +radio_wifi_count << std::endl;
        ss << "  commands_supported: " << +commands_supported << std::endl;
        ss << "  basic_id_max: " << +basic_id_max << std::endl;
        ss << "  authentication_pages_max: " << +authentication_pages_max << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
        map << target_component;              // offset: 1
        map << radio_function;                // offset: 2
        map << radio;                         // offset: 3
        map << radio_wifi_frequency_bands;    // offset: 4
        map << radio_wifi_count;              // offset: 5
        map << commands_supported;            // offset: 6
        map << basic_id_max;                  // offset: 7
        map << authentication_pages_max;      // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
        map >> target_component;              // offset: 1
        map >> radio_function;                // offset: 2
        map >> radio;                         // offset: 3
        map >> radio_wifi_frequency_bands;    // offset: 4
        map >> radio_wifi_count;              // offset: 5
        map >> commands_supported;            // offset: 6
        map >> basic_id_max;                  // offset: 7
        map >> authentication_pages_max;      // offset: 8
    }
};

} // namespace msg
} // namespace rid
} // namespace mavlink
