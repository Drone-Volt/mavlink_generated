/** @file
 *	@brief MAVLink comm testsuite protocol generated from rid.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "rid.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(rid, OPEN_DRONE_ID_BROADCAST_CAPABILITIES)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::rid::msg::OPEN_DRONE_ID_BROADCAST_CAPABILITIES packet_in{};
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.radio_function = 139;
    packet_in.radio = 206;
    packet_in.radio_wifi_frequency_bands = 17;
    packet_in.radio_wifi_count = 84;
    packet_in.commands_supported = 151;
    packet_in.basic_id_max = 218;
    packet_in.authentication_pages_max = 29;

    mavlink::rid::msg::OPEN_DRONE_ID_BROADCAST_CAPABILITIES packet1{};
    mavlink::rid::msg::OPEN_DRONE_ID_BROADCAST_CAPABILITIES packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.radio_function, packet2.radio_function);
    EXPECT_EQ(packet1.radio, packet2.radio);
    EXPECT_EQ(packet1.radio_wifi_frequency_bands, packet2.radio_wifi_frequency_bands);
    EXPECT_EQ(packet1.radio_wifi_count, packet2.radio_wifi_count);
    EXPECT_EQ(packet1.commands_supported, packet2.commands_supported);
    EXPECT_EQ(packet1.basic_id_max, packet2.basic_id_max);
    EXPECT_EQ(packet1.authentication_pages_max, packet2.authentication_pages_max);
}

#ifdef TEST_INTEROP
TEST(rid_interop, OPEN_DRONE_ID_BROADCAST_CAPABILITIES)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_open_drone_id_broadcast_capabilities_t packet_c {
         5, 72, 139, 206, 17, 84, 151, 218, 29
    };

    mavlink::rid::msg::OPEN_DRONE_ID_BROADCAST_CAPABILITIES packet_in{};
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.radio_function = 139;
    packet_in.radio = 206;
    packet_in.radio_wifi_frequency_bands = 17;
    packet_in.radio_wifi_count = 84;
    packet_in.commands_supported = 151;
    packet_in.basic_id_max = 218;
    packet_in.authentication_pages_max = 29;

    mavlink::rid::msg::OPEN_DRONE_ID_BROADCAST_CAPABILITIES packet2{};

    mavlink_msg_open_drone_id_broadcast_capabilities_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.radio_function, packet2.radio_function);
    EXPECT_EQ(packet_in.radio, packet2.radio);
    EXPECT_EQ(packet_in.radio_wifi_frequency_bands, packet2.radio_wifi_frequency_bands);
    EXPECT_EQ(packet_in.radio_wifi_count, packet2.radio_wifi_count);
    EXPECT_EQ(packet_in.commands_supported, packet2.commands_supported);
    EXPECT_EQ(packet_in.basic_id_max, packet2.basic_id_max);
    EXPECT_EQ(packet_in.authentication_pages_max, packet2.authentication_pages_max);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
