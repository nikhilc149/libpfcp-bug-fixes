/*
 * Copyright (c) 2019 Sprint
 * Copyright (c) 2020 T-Mobile
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __PFCP_ENUM_H
#define __PFCP_ENUM_H

#ifdef __cplusplus
extern "C" {
#endif

#define NODE_ID_IPV4_LEN		        5
#define NODE_ID_IPV6_LEN             	17
#define RECOV_TIMESTAMP_LEN          	4
#define CP_FUNC_FEAT_LEN         	    1
#define CP_FSEID_LEN_V4                	13
#define CP_FSEID_LEN_V6                	25
#define CP_FSEID_LEN_V4V6               29
#define PGWC_FQCSID_LEN              	7
#define SGWC_FQCSID_LEN  		        7
#define MME_FQCSID_LEN   		        7
#define EPDG_FQCSID_LEN  		        7
#define TWAN_FQCSID_LEN  		        7
#define REMOVE_TRAFFIC_ENDPOINT_LEN  	5
#define CREATE_TRAFFIC_ENDPOINT_LEN  	57
#define UPDATE_TRAFFIC_ENDPOINT_LEN  	52
#define CREATE_BAR_LEN  		        15
#define UPDATE_QER_LEN  		        79
#define UPDATE_BAR_LEN  		        15
#define PFCP_SEMREQ_FLAG_LEN  		    1
#define QUERY_URR_REFERENCE_LEN  	    4
#define USER_PLANE_INACTIV_TIMER_LEN 	4
#define DELETE_SESSION_HEADER_LEN 	    12


#define CP_FUNC_FEATURES_LEN         	1


/**/
#define UP_PDIU                        9
#define UP_TRACE                       12

#define CP_LOAD                        0
#define CP_OVRL                        1
/**/

enum source_interface_value {
	SOURCE_INTERFACE_VALUE_ACCESS =0,
	SOURCE_INTERFACE_VALUE_CORE =1,
	SOURCE_INTERFACE_VALUE_SGI_LAN_N6_LAN =2,
	SOURCE_INTERFACE_VALUE_CP_FUNCTION =3,
};

enum outer_header_description {
	GTP_U_UDP_IPv4 = 0,
	GTP_U_UDP_IPv6 = 1,
	UDP_IPv4 = 2,
	UDP_IPv6 = 3,
	IPv4 = 4,
	IPv6 = 5,
	GTP_U_UDP_IP = 6,
	VLAN_S_TAG = 7,
	S_TAG_C_TAG =8,
};

enum destination_interface_value {
	DESTINATION_INTERFACE_VALUE_ACCESS =0,
	DESTINATION_INTERFACE_VALUE_CORE =1,
};

enum fq_csid_node_id_type{
	IPV4_GLOBAL_UNICAST =0,
	IPV6_GLOBAL_UNICAST =1,
	MCC_MNC =2,

};

enum ul_gate {
	UL_GATE_OPEN =0,
	UL_GATE_CLOSED =1,
};

enum dl_gate {
	DL_GATE_OPEN =0,
	DL_GATE_CLOSED =1,
};

enum uplinkdownlink_time_unit {
	UPLINKDOWNLINK_TIME_UNIT_MINUTE =0,
	UPLINKDOWNLINK_TIME_UNIT_6_MINUTES =1,
	UPLINKDOWNLINK_TIME_UNIT_HOUR =2,
	UPLINKDOWNLINK_TIME_UNIT_DAY =3,
	UPLINKDOWNLINK_TIME_UNIT_WEEK =4,
};


enum graceful_release_period_information_element {
	GRACEFUL_RELEASE_PERIOD_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_2_SECONDS =0,
	GRACEFUL_RELEASE_PERIOD_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_1_MINUTE =1,
	GRACEFUL_RELEASE_PERIOD_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_10_MINUTES =2,
	GRACEFUL_RELEASE_PERIOD_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_1_HOUR =3,
	GRACEFUL_RELEASE_PERIOD_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_10_HOURS =4,
	GRACEFUL_RELEASE_PERIOD_INFORMATIONLEMENT_VALUE_INDICATES_THAT_THE_TIMER_IS_INFINITE =7,
};



enum timer_information_element {
	TIMER_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_2_SECONDS =0,
	TIMER_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_1_MINUTE =1,
	TIMER_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_10_MINUTES =2,
	TIMER_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_1_HOUR =3,
	TIMER_INFORMATIONLEMENT_VALUE_IS_INCREMENTED_IN_MULTIPLES_OF_10_HOURS =4,
	TIMER_INFORMATIONLEMENT_VALUE_INDICATES_THAT_THE_TIMER_IS_INFINITE =7,
};


enum rule_id_type {
	RULE_ID_TYPE_PDR =0,
	RULE_ID_TYPE_FAR =1,
	RULE_ID_TYPE_QER =2,
	RULE_ID_TYPE_URR =3,
	RULE_ID_TYPE_BAR =4,
};

enum li_policy {
	CC_BASED = 0,
	EVENT_BASED = 1,
	CC_EVENT_BASED = 2,
	CC_EVENT_DELETE = 3,
};

#ifdef __cplusplus
}
#endif

#endif /* __PFCP_ENUM_H */

