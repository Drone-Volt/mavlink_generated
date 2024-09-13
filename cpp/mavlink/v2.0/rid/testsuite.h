/** @file
 *    @brief MAVLink comm protocol testsuite generated from rid.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef RID_TESTSUITE_H
#define RID_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_rid(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_rid(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_open_drone_id_broadcast_capabilities(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_open_drone_id_broadcast_capabilities_t packet_in = {
        5,72,139,206,17,84,151,218,29
    };
    mavlink_open_drone_id_broadcast_capabilities_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.radio_function = packet_in.radio_function;
        packet1.radio = packet_in.radio;
        packet1.radio_wifi_frequency_bands = packet_in.radio_wifi_frequency_bands;
        packet1.radio_wifi_count = packet_in.radio_wifi_count;
        packet1.commands_supported = packet_in.commands_supported;
        packet1.basic_id_max = packet_in.basic_id_max;
        packet1.authentication_pages_max = packet_in.authentication_pages_max;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_open_drone_id_broadcast_capabilities_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_open_drone_id_broadcast_capabilities_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_open_drone_id_broadcast_capabilities_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.radio_function , packet1.radio , packet1.radio_wifi_frequency_bands , packet1.radio_wifi_count , packet1.commands_supported , packet1.basic_id_max , packet1.authentication_pages_max );
    mavlink_msg_open_drone_id_broadcast_capabilities_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_open_drone_id_broadcast_capabilities_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.radio_function , packet1.radio , packet1.radio_wifi_frequency_bands , packet1.radio_wifi_count , packet1.commands_supported , packet1.basic_id_max , packet1.authentication_pages_max );
    mavlink_msg_open_drone_id_broadcast_capabilities_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_open_drone_id_broadcast_capabilities_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_open_drone_id_broadcast_capabilities_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.radio_function , packet1.radio , packet1.radio_wifi_frequency_bands , packet1.radio_wifi_count , packet1.commands_supported , packet1.basic_id_max , packet1.authentication_pages_max );
    mavlink_msg_open_drone_id_broadcast_capabilities_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPEN_DRONE_ID_BROADCAST_CAPABILITIES") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPEN_DRONE_ID_BROADCAST_CAPABILITIES) != NULL);
#endif
}

static void mavlink_test_rid(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_open_drone_id_broadcast_capabilities(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // RID_TESTSUITE_H
