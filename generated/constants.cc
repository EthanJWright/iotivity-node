/*
 * Copyright 2016 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <nan.h>

#include "enums.h"

extern "C" {
#include <ocstack.h>
}

using namespace v8;

// The rest of this file is generated
NAN_MODULE_INIT(InitConstants) {
  // ocstackconfig.h: Stack configuration
#ifdef MAX_URI_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_URI_LENGTH);
#endif /* def MAX_URI_LENGTH */

#ifdef MAX_QUERY_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_QUERY_LENGTH);
#endif /* def MAX_QUERY_LENGTH */

#ifdef MAX_MANUFACTURER_NAME_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_MANUFACTURER_NAME_LENGTH);
#endif /* def MAX_MANUFACTURER_NAME_LENGTH */

#ifdef MAX_MANUFACTURER_URL_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_MANUFACTURER_URL_LENGTH);
#endif /* def MAX_MANUFACTURER_URL_LENGTH */

#ifdef MAX_PLATFORM_NAME_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_PLATFORM_NAME_LENGTH);
#endif /* def MAX_PLATFORM_NAME_LENGTH */

#ifdef MAX_PLATFORM_URL_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_PLATFORM_URL_LENGTH);
#endif /* def MAX_PLATFORM_URL_LENGTH */

#ifdef MAX_CONTAINED_RESOURCES
  SET_CONSTANT_NUMBER(target, MAX_CONTAINED_RESOURCES);
#endif /* def MAX_CONTAINED_RESOURCES */

#ifdef MAX_HEADER_OPTIONS
  SET_CONSTANT_NUMBER(target, MAX_HEADER_OPTIONS);
#endif /* def MAX_HEADER_OPTIONS */

#ifdef MAX_HEADER_OPTION_DATA_LENGTH
  SET_CONSTANT_NUMBER(target, MAX_HEADER_OPTION_DATA_LENGTH);
#endif /* def MAX_HEADER_OPTION_DATA_LENGTH */

#ifdef MAX_CB_TIMEOUT_SECONDS
  SET_CONSTANT_NUMBER(target, MAX_CB_TIMEOUT_SECONDS);
#endif /* def MAX_CB_TIMEOUT_SECONDS */


  // octypes.h: Definitions
#ifdef IOTIVITY_VERSION
  SET_CONSTANT_STRING(target, IOTIVITY_VERSION);
#endif /* def IOTIVITY_VERSION */

#ifdef OC_RSRVD_WELL_KNOWN_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_WELL_KNOWN_URI);
#endif /* def OC_RSRVD_WELL_KNOWN_URI */

#ifdef OC_RSRVD_DEVICE_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_URI);
#endif /* def OC_RSRVD_DEVICE_URI */

#ifdef OC_RSRVD_PLATFORM_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_PLATFORM_URI);
#endif /* def OC_RSRVD_PLATFORM_URI */

#ifdef OC_RSRVD_RESOURCE_TYPES_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPES_URI);
#endif /* def OC_RSRVD_RESOURCE_TYPES_URI */

#ifdef OC_RSRVD_GATEWAY_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_GATEWAY_URI);
#endif /* def OC_RSRVD_GATEWAY_URI */

#ifdef OC_RSRVD_WELL_KNOWN_MQ_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_WELL_KNOWN_MQ_URI);
#endif /* def OC_RSRVD_WELL_KNOWN_MQ_URI */

#ifdef OC_RSRVD_KEEPALIVE_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_KEEPALIVE_URI);
#endif /* def OC_RSRVD_KEEPALIVE_URI */

#ifdef OC_RSRVD_PRESENCE_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_PRESENCE_URI);
#endif /* def OC_RSRVD_PRESENCE_URI */

#ifdef OC_RSRVD_DEVICE_PRESENCE_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_PRESENCE_URI);
#endif /* def OC_RSRVD_DEVICE_PRESENCE_URI */

#ifdef OC_DEFAULT_PRESENCE_TTL_SECONDS
  SET_CONSTANT_NUMBER(target, OC_DEFAULT_PRESENCE_TTL_SECONDS);
#endif /* def OC_DEFAULT_PRESENCE_TTL_SECONDS */

#ifdef OC_MULTICAST_DISCOVERY_URI
  SET_CONSTANT_STRING(target, OC_MULTICAST_DISCOVERY_URI);
#endif /* def OC_MULTICAST_DISCOVERY_URI */

#ifdef OC_QUERY_SEPARATOR
  SET_CONSTANT_STRING(target, OC_QUERY_SEPARATOR);
#endif /* def OC_QUERY_SEPARATOR */

#ifdef OC_KEY_VALUE_DELIMITER
  SET_CONSTANT_STRING(target, OC_KEY_VALUE_DELIMITER);
#endif /* def OC_KEY_VALUE_DELIMITER */

#ifdef OC_MAX_PRESENCE_TTL_SECONDS
  SET_CONSTANT_NUMBER(target, OC_MAX_PRESENCE_TTL_SECONDS);
#endif /* def OC_MAX_PRESENCE_TTL_SECONDS */

#ifdef OC_RSRVD_TRIGGER_CREATE
  SET_CONSTANT_STRING(target, OC_RSRVD_TRIGGER_CREATE);
#endif /* def OC_RSRVD_TRIGGER_CREATE */

#ifdef OC_RSRVD_TRIGGER_CHANGE
  SET_CONSTANT_STRING(target, OC_RSRVD_TRIGGER_CHANGE);
#endif /* def OC_RSRVD_TRIGGER_CHANGE */

#ifdef OC_RSRVD_TRIGGER_DELETE
  SET_CONSTANT_STRING(target, OC_RSRVD_TRIGGER_DELETE);
#endif /* def OC_RSRVD_TRIGGER_DELETE */

#ifdef OC_RSRVD_OC
  SET_CONSTANT_STRING(target, OC_RSRVD_OC);
#endif /* def OC_RSRVD_OC */

#ifdef OC_RSRVD_PAYLOAD
  SET_CONSTANT_STRING(target, OC_RSRVD_PAYLOAD);
#endif /* def OC_RSRVD_PAYLOAD */

#ifdef OC_RSRVD_HREF
  SET_CONSTANT_STRING(target, OC_RSRVD_HREF);
#endif /* def OC_RSRVD_HREF */

#ifdef OC_RSRVD_PROPERTY
  SET_CONSTANT_STRING(target, OC_RSRVD_PROPERTY);
#endif /* def OC_RSRVD_PROPERTY */

#ifdef OC_RSRVD_REPRESENTATION
  SET_CONSTANT_STRING(target, OC_RSRVD_REPRESENTATION);
#endif /* def OC_RSRVD_REPRESENTATION */

#ifdef OC_RSRVD_CONTENT_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_CONTENT_TYPE);
#endif /* def OC_RSRVD_CONTENT_TYPE */

#ifdef OC_RSRVD_RESOURCE_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE);
#endif /* def OC_RSRVD_RESOURCE_TYPE */

#ifdef OC_RSRVD_RESOURCE_TYPE_PRESENCE
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_PRESENCE);
#endif /* def OC_RSRVD_RESOURCE_TYPE_PRESENCE */

#ifdef OC_RSRVD_RESOURCE_TYPE_DEVICE
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_DEVICE);
#endif /* def OC_RSRVD_RESOURCE_TYPE_DEVICE */

#ifdef OC_RSRVD_RESOURCE_TYPE_PLATFORM
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_PLATFORM);
#endif /* def OC_RSRVD_RESOURCE_TYPE_PLATFORM */

#ifdef OC_RSRVD_RESOURCE_TYPE_MAINTENANCE
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_MAINTENANCE);
#endif /* def OC_RSRVD_RESOURCE_TYPE_MAINTENANCE */

#ifdef OC_RSRVD_RESOURCE_TYPE_COLLECTION
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_COLLECTION);
#endif /* def OC_RSRVD_RESOURCE_TYPE_COLLECTION */

#ifdef OC_RSRVD_RESOURCE_TYPE_RES
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_RES);
#endif /* def OC_RSRVD_RESOURCE_TYPE_RES */

#ifdef OC_RSRVD_RESOURCE_TYPE_MQ_BROKER
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_MQ_BROKER);
#endif /* def OC_RSRVD_RESOURCE_TYPE_MQ_BROKER */

#ifdef OC_RSRVD_RESOURCE_TYPE_MQ_TOPIC
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_MQ_TOPIC);
#endif /* def OC_RSRVD_RESOURCE_TYPE_MQ_TOPIC */

#ifdef OC_RSRVD_RESOURCE_TYPE_INTROSPECTION
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_INTROSPECTION);
#endif /* def OC_RSRVD_RESOURCE_TYPE_INTROSPECTION */

#ifdef OC_RSRVD_RESOURCE_TYPE_INTROSPECTION_PAYLOAD
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_INTROSPECTION_PAYLOAD);
#endif /* def OC_RSRVD_RESOURCE_TYPE_INTROSPECTION_PAYLOAD */

#ifdef OC_RSRVD_INTERFACE
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE);
#endif /* def OC_RSRVD_INTERFACE */

#ifdef OC_RSRVD_DEVICE_TTL
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_TTL);
#endif /* def OC_RSRVD_DEVICE_TTL */

#ifdef OC_RSRVD_TTL
  SET_CONSTANT_STRING(target, OC_RSRVD_TTL);
#endif /* def OC_RSRVD_TTL */

#ifdef OC_RSRVD_NONCE
  SET_CONSTANT_STRING(target, OC_RSRVD_NONCE);
#endif /* def OC_RSRVD_NONCE */

#ifdef OC_RSRVD_TRIGGER
  SET_CONSTANT_STRING(target, OC_RSRVD_TRIGGER);
#endif /* def OC_RSRVD_TRIGGER */

#ifdef OC_RSRVD_LINKS
  SET_CONSTANT_STRING(target, OC_RSRVD_LINKS);
#endif /* def OC_RSRVD_LINKS */

#ifdef OC_RSRVD_INTERFACE_DEFAULT
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_DEFAULT);
#endif /* def OC_RSRVD_INTERFACE_DEFAULT */

#ifdef OC_RSRVD_INTERFACE_READ
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_READ);
#endif /* def OC_RSRVD_INTERFACE_READ */

#ifdef OC_RSRVD_INTERFACE_READ_WRITE
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_READ_WRITE);
#endif /* def OC_RSRVD_INTERFACE_READ_WRITE */

#ifdef OC_RSRVD_INTERFACE_LL
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_LL);
#endif /* def OC_RSRVD_INTERFACE_LL */

#ifdef OC_RSRVD_INTERFACE_BATCH
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_BATCH);
#endif /* def OC_RSRVD_INTERFACE_BATCH */

#ifdef OC_RSRVD_INTERFACE_ACTUATOR
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_ACTUATOR);
#endif /* def OC_RSRVD_INTERFACE_ACTUATOR */

#ifdef OC_RSRVD_INTERFACE_SENSOR
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_SENSOR);
#endif /* def OC_RSRVD_INTERFACE_SENSOR */

#ifdef OC_RSRVD_INTERFACE_GROUP
  SET_CONSTANT_STRING(target, OC_RSRVD_INTERFACE_GROUP);
#endif /* def OC_RSRVD_INTERFACE_GROUP */

#ifdef OC_RSRVD_FW_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_FW_VERSION);
#endif /* def OC_RSRVD_FW_VERSION */

#ifdef OC_RSRVD_HOST_NAME
  SET_CONSTANT_STRING(target, OC_RSRVD_HOST_NAME);
#endif /* def OC_RSRVD_HOST_NAME */

#ifdef OC_RSRVD_POLICY
  SET_CONSTANT_STRING(target, OC_RSRVD_POLICY);
#endif /* def OC_RSRVD_POLICY */

#ifdef OC_RSRVD_BITMAP
  SET_CONSTANT_STRING(target, OC_RSRVD_BITMAP);
#endif /* def OC_RSRVD_BITMAP */

#ifdef OC_RSRVD_SECURE
  SET_CONSTANT_STRING(target, OC_RSRVD_SECURE);
#endif /* def OC_RSRVD_SECURE */

#ifdef OC_SECURITY_DB_FILE_NAME
  SET_CONSTANT_STRING(target, OC_SECURITY_DB_FILE_NAME);
#endif /* def OC_SECURITY_DB_FILE_NAME */

#ifdef OC_SECURITY_DB_DAT_FILE_NAME
  SET_CONSTANT_STRING(target, OC_SECURITY_DB_DAT_FILE_NAME);
#endif /* def OC_SECURITY_DB_DAT_FILE_NAME */

#ifdef OC_RSRVD_HOSTING_PORT
  SET_CONSTANT_STRING(target, OC_RSRVD_HOSTING_PORT);
#endif /* def OC_RSRVD_HOSTING_PORT */

#ifdef OC_RSRVD_TCP_PORT
  SET_CONSTANT_STRING(target, OC_RSRVD_TCP_PORT);
#endif /* def OC_RSRVD_TCP_PORT */

#ifdef OC_RSRVD_TLS_PORT
  SET_CONSTANT_STRING(target, OC_RSRVD_TLS_PORT);
#endif /* def OC_RSRVD_TLS_PORT */

#ifdef OC_RSRVD_SERVER_INSTANCE_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_SERVER_INSTANCE_ID);
#endif /* def OC_RSRVD_SERVER_INSTANCE_ID */

#ifdef OC_RSRVD_ENDPOINTS
  SET_CONSTANT_STRING(target, OC_RSRVD_ENDPOINTS);
#endif /* def OC_RSRVD_ENDPOINTS */

#ifdef OC_RSRVD_ENDPOINT
  SET_CONSTANT_STRING(target, OC_RSRVD_ENDPOINT);
#endif /* def OC_RSRVD_ENDPOINT */

#ifdef OC_RSRVD_PRIORITY
  SET_CONSTANT_STRING(target, OC_RSRVD_PRIORITY);
#endif /* def OC_RSRVD_PRIORITY */

#ifdef OC_RSRVD_INSTANCE_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_INSTANCE_ID);
#endif /* def OC_RSRVD_INSTANCE_ID */

#ifdef OC_RSRVD_PLATFORM_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_PLATFORM_ID);
#endif /* def OC_RSRVD_PLATFORM_ID */

#ifdef OC_RSRVD_MFG_NAME
  SET_CONSTANT_STRING(target, OC_RSRVD_MFG_NAME);
#endif /* def OC_RSRVD_MFG_NAME */

#ifdef OC_RSRVD_MFG_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_MFG_URL);
#endif /* def OC_RSRVD_MFG_URL */

#ifdef OC_RSRVD_MODEL_NUM
  SET_CONSTANT_STRING(target, OC_RSRVD_MODEL_NUM);
#endif /* def OC_RSRVD_MODEL_NUM */

#ifdef OC_RSRVD_MFG_DATE
  SET_CONSTANT_STRING(target, OC_RSRVD_MFG_DATE);
#endif /* def OC_RSRVD_MFG_DATE */

#ifdef OC_RSRVD_PLATFORM_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_PLATFORM_VERSION);
#endif /* def OC_RSRVD_PLATFORM_VERSION */

#ifdef OC_RSRVD_OS_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_OS_VERSION);
#endif /* def OC_RSRVD_OS_VERSION */

#ifdef OC_RSRVD_HARDWARE_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_HARDWARE_VERSION);
#endif /* def OC_RSRVD_HARDWARE_VERSION */

#ifdef OC_RSRVD_FIRMWARE_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_FIRMWARE_VERSION);
#endif /* def OC_RSRVD_FIRMWARE_VERSION */

#ifdef OC_RSRVD_SUPPORT_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_SUPPORT_URL);
#endif /* def OC_RSRVD_SUPPORT_URL */

#ifdef OC_RSRVD_SYSTEM_TIME
  SET_CONSTANT_STRING(target, OC_RSRVD_SYSTEM_TIME);
#endif /* def OC_RSRVD_SYSTEM_TIME */

#ifdef OC_RSRVD_VID
  SET_CONSTANT_STRING(target, OC_RSRVD_VID);
#endif /* def OC_RSRVD_VID */

#ifdef OC_RSRVD_DEVICE_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_ID);
#endif /* def OC_RSRVD_DEVICE_ID */

#ifdef OC_RSRVD_DEVICE_NAME
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_NAME);
#endif /* def OC_RSRVD_DEVICE_NAME */

#ifdef OC_RSRVD_SPEC_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_SPEC_VERSION);
#endif /* def OC_RSRVD_SPEC_VERSION */

#ifdef OC_RSRVD_DATA_MODEL_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_DATA_MODEL_VERSION);
#endif /* def OC_RSRVD_DATA_MODEL_VERSION */

#ifdef OC_RSRVD_DEVICE_DESCRIPTION
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_DESCRIPTION);
#endif /* def OC_RSRVD_DEVICE_DESCRIPTION */

#ifdef OC_RSRVD_SOFTWARE_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_SOFTWARE_VERSION);
#endif /* def OC_RSRVD_SOFTWARE_VERSION */

#ifdef OC_RSRVD_DEVICE_MFG_NAME
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_MFG_NAME);
#endif /* def OC_RSRVD_DEVICE_MFG_NAME */

#ifdef OC_RSRVD_DEVICE_MODEL_NUM
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_MODEL_NUM);
#endif /* def OC_RSRVD_DEVICE_MODEL_NUM */

#ifdef OC_RSRVD_PROTOCOL_INDEPENDENT_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_PROTOCOL_INDEPENDENT_ID);
#endif /* def OC_RSRVD_PROTOCOL_INDEPENDENT_ID */

#ifdef OC_SPEC_VERSION
  SET_CONSTANT_STRING(target, OC_SPEC_VERSION);
#endif /* def OC_SPEC_VERSION */

#ifdef OC_SPEC_VERSION_VALUE
  SET_CONSTANT_NUMBER(target, OC_SPEC_VERSION_VALUE);
#endif /* def OC_SPEC_VERSION_VALUE */

#ifdef OC_DATA_MODEL_VERSION
  SET_CONSTANT_STRING(target, OC_DATA_MODEL_VERSION);
#endif /* def OC_DATA_MODEL_VERSION */

#ifdef OC_RSRVD_INTROSPECTION_NAME
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_NAME);
#endif /* def OC_RSRVD_INTROSPECTION_NAME */

#ifdef OC_RSRVD_INTROSPECTION_NAME_VALUE
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_NAME_VALUE);
#endif /* def OC_RSRVD_INTROSPECTION_NAME_VALUE */

#ifdef OC_RSRVD_INTROSPECTION_URL_INFO
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_URL_INFO);
#endif /* def OC_RSRVD_INTROSPECTION_URL_INFO */

#ifdef OC_RSRVD_INTROSPECTION_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_URL);
#endif /* def OC_RSRVD_INTROSPECTION_URL */

#ifdef OC_RSRVD_INTROSPECTION_PROTOCOL
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_PROTOCOL);
#endif /* def OC_RSRVD_INTROSPECTION_PROTOCOL */

#ifdef OC_RSRVD_INTROSPECTION_CONTENT_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_CONTENT_TYPE);
#endif /* def OC_RSRVD_INTROSPECTION_CONTENT_TYPE */

#ifdef OC_RSRVD_INTROSPECTION_CONTENT_TYPE_VALUE
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_CONTENT_TYPE_VALUE);
#endif /* def OC_RSRVD_INTROSPECTION_CONTENT_TYPE_VALUE */

#ifdef OC_RSRVD_INTROSPECTION_VERSION
  SET_CONSTANT_STRING(target, OC_RSRVD_INTROSPECTION_VERSION);
#endif /* def OC_RSRVD_INTROSPECTION_VERSION */

#ifdef OC_RSRVD_INTROSPECTION_VERSION_VALUE
  SET_CONSTANT_NUMBER(target, OC_RSRVD_INTROSPECTION_VERSION_VALUE);
#endif /* def OC_RSRVD_INTROSPECTION_VERSION_VALUE */

#ifdef OC_INTROSPECTION_FILE_NAME
  SET_CONSTANT_STRING(target, OC_INTROSPECTION_FILE_NAME);
#endif /* def OC_INTROSPECTION_FILE_NAME */

#ifdef OC_MULTICAST_PREFIX
  SET_CONSTANT_STRING(target, OC_MULTICAST_PREFIX);
#endif /* def OC_MULTICAST_PREFIX */

#ifdef OC_MULTICAST_IP
  SET_CONSTANT_STRING(target, OC_MULTICAST_IP);
#endif /* def OC_MULTICAST_IP */

#ifdef OC_MULTICAST_PORT
  SET_CONSTANT_NUMBER(target, OC_MULTICAST_PORT);
#endif /* def OC_MULTICAST_PORT */

#ifdef MAX_ADDR_STR_SIZE
  SET_CONSTANT_NUMBER(target, MAX_ADDR_STR_SIZE);
#endif /* def MAX_ADDR_STR_SIZE */

#ifdef MAC_ADDR_STR_SIZE
  SET_CONSTANT_NUMBER(target, MAC_ADDR_STR_SIZE);
#endif /* def MAC_ADDR_STR_SIZE */

#ifdef MAC_ADDR_BLOCKS
  SET_CONSTANT_NUMBER(target, MAC_ADDR_BLOCKS);
#endif /* def MAC_ADDR_BLOCKS */

#ifdef MAX_IDENTITY_SIZE
  SET_CONSTANT_NUMBER(target, MAX_IDENTITY_SIZE);
#endif /* def MAX_IDENTITY_SIZE */

#ifdef UUID_IDENTITY_SIZE
  SET_CONSTANT_NUMBER(target, UUID_IDENTITY_SIZE);
#endif /* def UUID_IDENTITY_SIZE */

#ifdef OC_RSRVD_RD_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_RD_URI);
#endif /* def OC_RSRVD_RD_URI */

#ifdef OC_RSRVD_RESOURCE_TYPE_RD
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_RD);
#endif /* def OC_RSRVD_RESOURCE_TYPE_RD */

#ifdef OC_RSRVD_RD_DISCOVERY_SEL
  SET_CONSTANT_STRING(target, OC_RSRVD_RD_DISCOVERY_SEL);
#endif /* def OC_RSRVD_RD_DISCOVERY_SEL */

#ifdef OC_RSRVD_PROXY_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_PROXY_URI);
#endif /* def OC_RSRVD_PROXY_URI */

#ifdef OC_RSRVD_PROXY_OPTION_ID
  SET_CONSTANT_NUMBER(target, OC_RSRVD_PROXY_OPTION_ID);
#endif /* def OC_RSRVD_PROXY_OPTION_ID */

#ifdef OC_RSRVD_INS
  SET_CONSTANT_STRING(target, OC_RSRVD_INS);
#endif /* def OC_RSRVD_INS */

#ifdef OC_RSRVD_RTS
  SET_CONSTANT_STRING(target, OC_RSRVD_RTS);
#endif /* def OC_RSRVD_RTS */

#ifdef OC_RSRVD_DREL
  SET_CONSTANT_STRING(target, OC_RSRVD_DREL);
#endif /* def OC_RSRVD_DREL */

#ifdef OC_RSRVD_REL
  SET_CONSTANT_STRING(target, OC_RSRVD_REL);
#endif /* def OC_RSRVD_REL */

#ifdef OC_RSRVD_TITLE
  SET_CONSTANT_STRING(target, OC_RSRVD_TITLE);
#endif /* def OC_RSRVD_TITLE */

#ifdef OC_RSRVD_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_URI);
#endif /* def OC_RSRVD_URI */

#ifdef OC_RSRVD_MEDIA_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_MEDIA_TYPE);
#endif /* def OC_RSRVD_MEDIA_TYPE */

#ifdef OC_RSRVD_RESOURCE_TYPE_RDPUBLISH
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_TYPE_RDPUBLISH);
#endif /* def OC_RSRVD_RESOURCE_TYPE_RDPUBLISH */

#ifdef OC_RSRVD_ACCOUNT_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCOUNT_URI);
#endif /* def OC_RSRVD_ACCOUNT_URI */

#ifdef OC_RSRVD_ACCOUNT_SEARCH_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCOUNT_SEARCH_URI);
#endif /* def OC_RSRVD_ACCOUNT_SEARCH_URI */

#ifdef OC_RSRVD_ACCOUNT_SESSION_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCOUNT_SESSION_URI);
#endif /* def OC_RSRVD_ACCOUNT_SESSION_URI */

#ifdef OC_RSRVD_ACCOUNT_TOKEN_REFRESH_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCOUNT_TOKEN_REFRESH_URI);
#endif /* def OC_RSRVD_ACCOUNT_TOKEN_REFRESH_URI */

#ifdef OC_RSRVD_ACL_GROUP_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_GROUP_URI);
#endif /* def OC_RSRVD_ACL_GROUP_URI */

#ifdef OC_RSRVD_ACL_INVITE_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_INVITE_URI);
#endif /* def OC_RSRVD_ACL_INVITE_URI */

#ifdef OC_RSRVD_AUTHPROVIDER
  SET_CONSTANT_STRING(target, OC_RSRVD_AUTHPROVIDER);
#endif /* def OC_RSRVD_AUTHPROVIDER */

#ifdef OC_RSRVD_AUTHCODE
  SET_CONSTANT_STRING(target, OC_RSRVD_AUTHCODE);
#endif /* def OC_RSRVD_AUTHCODE */

#ifdef OC_RSRVD_ACCESS_TOKEN
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCESS_TOKEN);
#endif /* def OC_RSRVD_ACCESS_TOKEN */

#ifdef OC_RSRVD_LOGIN
  SET_CONSTANT_STRING(target, OC_RSRVD_LOGIN);
#endif /* def OC_RSRVD_LOGIN */

#ifdef OC_RSRVD_SEARCH
  SET_CONSTANT_STRING(target, OC_RSRVD_SEARCH);
#endif /* def OC_RSRVD_SEARCH */

#ifdef OC_RSRVD_GRANT_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_GRANT_TYPE);
#endif /* def OC_RSRVD_GRANT_TYPE */

#ifdef OC_RSRVD_REFRESH_TOKEN
  SET_CONSTANT_STRING(target, OC_RSRVD_REFRESH_TOKEN);
#endif /* def OC_RSRVD_REFRESH_TOKEN */

#ifdef OC_RSRVD_USER_UUID
  SET_CONSTANT_STRING(target, OC_RSRVD_USER_UUID);
#endif /* def OC_RSRVD_USER_UUID */

#ifdef OC_RSRVD_GROUP_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_ID);
#endif /* def OC_RSRVD_GROUP_ID */

#ifdef OC_RSRVD_MEMBER_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_MEMBER_ID);
#endif /* def OC_RSRVD_MEMBER_ID */

#ifdef OC_RSRVD_INVITE
  SET_CONSTANT_STRING(target, OC_RSRVD_INVITE);
#endif /* def OC_RSRVD_INVITE */

#ifdef OC_RSRVD_ACCEPT
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCEPT);
#endif /* def OC_RSRVD_ACCEPT */

#ifdef OC_RSRVD_OPERATION
  SET_CONSTANT_STRING(target, OC_RSRVD_OPERATION);
#endif /* def OC_RSRVD_OPERATION */

#ifdef OC_RSRVD_ADD
  SET_CONSTANT_STRING(target, OC_RSRVD_ADD);
#endif /* def OC_RSRVD_ADD */

#ifdef OC_RSRVD_DELETE
  SET_CONSTANT_STRING(target, OC_RSRVD_DELETE);
#endif /* def OC_RSRVD_DELETE */

#ifdef OC_RSRVD_OWNER
  SET_CONSTANT_STRING(target, OC_RSRVD_OWNER);
#endif /* def OC_RSRVD_OWNER */

#ifdef OC_RSRVD_MEMBERS
  SET_CONSTANT_STRING(target, OC_RSRVD_MEMBERS);
#endif /* def OC_RSRVD_MEMBERS */

#ifdef OC_RSRVD_GRANT_TYPE_REFRESH_TOKEN
  SET_CONSTANT_STRING(target, OC_RSRVD_GRANT_TYPE_REFRESH_TOKEN);
#endif /* def OC_RSRVD_GRANT_TYPE_REFRESH_TOKEN */

#ifdef OC_RSRVD_PROV_CRL_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_PROV_CRL_URL);
#endif /* def OC_RSRVD_PROV_CRL_URL */

#ifdef OC_RSRVD_LAST_UPDATE
  SET_CONSTANT_STRING(target, OC_RSRVD_LAST_UPDATE);
#endif /* def OC_RSRVD_LAST_UPDATE */

#ifdef OC_RSRVD_THIS_UPDATE
  SET_CONSTANT_STRING(target, OC_RSRVD_THIS_UPDATE);
#endif /* def OC_RSRVD_THIS_UPDATE */

#ifdef OC_RSRVD_NEXT_UPDATE
  SET_CONSTANT_STRING(target, OC_RSRVD_NEXT_UPDATE);
#endif /* def OC_RSRVD_NEXT_UPDATE */

#ifdef OC_RSRVD_SERIAL_NUMBERS
  SET_CONSTANT_STRING(target, OC_RSRVD_SERIAL_NUMBERS);
#endif /* def OC_RSRVD_SERIAL_NUMBERS */

#ifdef OC_RSRVD_CRL
  SET_CONSTANT_STRING(target, OC_RSRVD_CRL);
#endif /* def OC_RSRVD_CRL */

#ifdef OC_RSRVD_CRL_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_CRL_ID);
#endif /* def OC_RSRVD_CRL_ID */

#ifdef OC_RSRVD_GROUP_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_URL);
#endif /* def OC_RSRVD_GROUP_URL */

#ifdef OC_RSRVD_ACL_GROUP_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_GROUP_URL);
#endif /* def OC_RSRVD_ACL_GROUP_URL */

#ifdef OC_RSRVD_ACL_INVITE_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_INVITE_URL);
#endif /* def OC_RSRVD_ACL_INVITE_URL */

#ifdef OC_RSRVD_ACL_VERIFY_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_VERIFY_URL);
#endif /* def OC_RSRVD_ACL_VERIFY_URL */

#ifdef OC_RSRVD_ACL_ID_URL
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_ID_URL);
#endif /* def OC_RSRVD_ACL_ID_URL */

#ifdef OC_RSRVD_OWNER_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_OWNER_ID);
#endif /* def OC_RSRVD_OWNER_ID */

#ifdef OC_RSRVD_ACL_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_ACL_ID);
#endif /* def OC_RSRVD_ACL_ID */

#ifdef OC_RSRVD_ACE_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_ACE_ID);
#endif /* def OC_RSRVD_ACE_ID */

#ifdef OC_RSRVD_SUBJECT_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_SUBJECT_ID);
#endif /* def OC_RSRVD_SUBJECT_ID */

#ifdef OC_RSRVD_REQUEST_METHOD
  SET_CONSTANT_STRING(target, OC_RSRVD_REQUEST_METHOD);
#endif /* def OC_RSRVD_REQUEST_METHOD */

#ifdef OC_RSRVD_REQUEST_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_REQUEST_URI);
#endif /* def OC_RSRVD_REQUEST_URI */

#ifdef OC_RSRVD_GROUP_MASTER_ID
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_MASTER_ID);
#endif /* def OC_RSRVD_GROUP_MASTER_ID */

#ifdef OC_RSRVD_GROUP_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_TYPE);
#endif /* def OC_RSRVD_GROUP_TYPE */

#ifdef OC_RSRVD_SUBJECT_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_SUBJECT_TYPE);
#endif /* def OC_RSRVD_SUBJECT_TYPE */

#ifdef OC_RSRVD_GROUP_ID_LIST
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_ID_LIST);
#endif /* def OC_RSRVD_GROUP_ID_LIST */

#ifdef OC_RSRVD_MEMBER_ID_LIST
  SET_CONSTANT_STRING(target, OC_RSRVD_MEMBER_ID_LIST);
#endif /* def OC_RSRVD_MEMBER_ID_LIST */

#ifdef OC_RSRVD_DEVICE_ID_LIST
  SET_CONSTANT_STRING(target, OC_RSRVD_DEVICE_ID_LIST);
#endif /* def OC_RSRVD_DEVICE_ID_LIST */

#ifdef OC_RSRVD_ACCESS_CONTROL_LIST
  SET_CONSTANT_STRING(target, OC_RSRVD_ACCESS_CONTROL_LIST);
#endif /* def OC_RSRVD_ACCESS_CONTROL_LIST */

#ifdef OC_RSRVD_RESOURCES
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCES);
#endif /* def OC_RSRVD_RESOURCES */

#ifdef OC_RSRVD_VALIDITY
  SET_CONSTANT_STRING(target, OC_RSRVD_VALIDITY);
#endif /* def OC_RSRVD_VALIDITY */

#ifdef OC_RSRVD_PERIOD
  SET_CONSTANT_STRING(target, OC_RSRVD_PERIOD);
#endif /* def OC_RSRVD_PERIOD */

#ifdef OC_RSRVD_RECURRENCE
  SET_CONSTANT_STRING(target, OC_RSRVD_RECURRENCE);
#endif /* def OC_RSRVD_RECURRENCE */

#ifdef OC_RSRVD_INVITED
  SET_CONSTANT_STRING(target, OC_RSRVD_INVITED);
#endif /* def OC_RSRVD_INVITED */

#ifdef OC_RSRVD_ENCODING
  SET_CONSTANT_STRING(target, OC_RSRVD_ENCODING);
#endif /* def OC_RSRVD_ENCODING */

#ifdef OC_OIC_SEC
  SET_CONSTANT_STRING(target, OC_OIC_SEC);
#endif /* def OC_OIC_SEC */

#ifdef OC_RSRVD_BASE64
  SET_CONSTANT_STRING(target, OC_RSRVD_BASE64);
#endif /* def OC_RSRVD_BASE64 */

#ifdef OC_RSRVD_DER
  SET_CONSTANT_STRING(target, OC_RSRVD_DER);
#endif /* def OC_RSRVD_DER */

#ifdef OC_RSRVD_PEM
  SET_CONSTANT_STRING(target, OC_RSRVD_PEM);
#endif /* def OC_RSRVD_PEM */

#ifdef OC_RSRVD_RAW
  SET_CONSTANT_STRING(target, OC_RSRVD_RAW);
#endif /* def OC_RSRVD_RAW */

#ifdef OC_RSRVD_UNKNOWN
  SET_CONSTANT_STRING(target, OC_RSRVD_UNKNOWN);
#endif /* def OC_RSRVD_UNKNOWN */

#ifdef OC_RSRVD_DATA
  SET_CONSTANT_STRING(target, OC_RSRVD_DATA);
#endif /* def OC_RSRVD_DATA */

#ifdef OC_RSRVD_RESOURCE_OWNER_UUID
  SET_CONSTANT_STRING(target, OC_RSRVD_RESOURCE_OWNER_UUID);
#endif /* def OC_RSRVD_RESOURCE_OWNER_UUID */

#ifdef OC_RSRVD_SUBJECT_UUID
  SET_CONSTANT_STRING(target, OC_RSRVD_SUBJECT_UUID);
#endif /* def OC_RSRVD_SUBJECT_UUID */

#ifdef OC_RSRVD_PERMISSION_MASK
  SET_CONSTANT_STRING(target, OC_RSRVD_PERMISSION_MASK);
#endif /* def OC_RSRVD_PERMISSION_MASK */

#ifdef OC_RSRVD_GROUP_PERMISSION
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_PERMISSION);
#endif /* def OC_RSRVD_GROUP_PERMISSION */

#ifdef OC_RSRVD_GROUP_ACL
  SET_CONSTANT_STRING(target, OC_RSRVD_GROUP_ACL);
#endif /* def OC_RSRVD_GROUP_ACL */

#ifdef OC_RSRVD_PROV_CERT_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_PROV_CERT_URI);
#endif /* def OC_RSRVD_PROV_CERT_URI */

#ifdef OC_RSRVD_CSR
  SET_CONSTANT_STRING(target, OC_RSRVD_CSR);
#endif /* def OC_RSRVD_CSR */

#ifdef OC_RSRVD_CERT
  SET_CONSTANT_STRING(target, OC_RSRVD_CERT);
#endif /* def OC_RSRVD_CERT */

#ifdef OC_RSRVD_CACERT
  SET_CONSTANT_STRING(target, OC_RSRVD_CACERT);
#endif /* def OC_RSRVD_CACERT */

#ifdef OC_RSRVD_TOKEN_TYPE
  SET_CONSTANT_STRING(target, OC_RSRVD_TOKEN_TYPE);
#endif /* def OC_RSRVD_TOKEN_TYPE */

#ifdef OC_RSRVD_EXPIRES_IN
  SET_CONSTANT_STRING(target, OC_RSRVD_EXPIRES_IN);
#endif /* def OC_RSRVD_EXPIRES_IN */

#ifdef OC_RSRVD_REDIRECT_URI
  SET_CONSTANT_STRING(target, OC_RSRVD_REDIRECT_URI);
#endif /* def OC_RSRVD_REDIRECT_URI */

#ifdef OC_RSRVD_CERTIFICATE
  SET_CONSTANT_STRING(target, OC_RSRVD_CERTIFICATE);
#endif /* def OC_RSRVD_CERTIFICATE */

#ifdef COAP_OPTION_ACCEPT_VERSION
  SET_CONSTANT_NUMBER(target, COAP_OPTION_ACCEPT_VERSION);
#endif /* def COAP_OPTION_ACCEPT_VERSION */

#ifdef COAP_OPTION_CONTENT_VERSION
  SET_CONSTANT_NUMBER(target, COAP_OPTION_CONTENT_VERSION);
#endif /* def COAP_OPTION_CONTENT_VERSION */

#ifdef OC_MASK_SCOPE
  SET_CONSTANT_NUMBER(target, OC_MASK_SCOPE);
#endif /* def OC_MASK_SCOPE */

#ifdef OC_MASK_MODS
  SET_CONSTANT_NUMBER(target, OC_MASK_MODS);
#endif /* def OC_MASK_MODS */

#ifdef OC_MASK_FAMS
  SET_CONSTANT_NUMBER(target, OC_MASK_FAMS);
#endif /* def OC_MASK_FAMS */

#ifdef CT_ADAPTER_SHIFT
  SET_CONSTANT_NUMBER(target, CT_ADAPTER_SHIFT);
#endif /* def CT_ADAPTER_SHIFT */

#ifdef CT_MASK_FLAGS
  SET_CONSTANT_NUMBER(target, CT_MASK_FLAGS);
#endif /* def CT_MASK_FLAGS */

#ifdef CT_MASK_ADAPTER
  SET_CONSTANT_NUMBER(target, CT_MASK_ADAPTER);
#endif /* def CT_MASK_ADAPTER */

#ifdef OC_MASK_RESOURCE_SECURE
  SET_CONSTANT_NUMBER(target, OC_MASK_RESOURCE_SECURE);
#endif /* def OC_MASK_RESOURCE_SECURE */

#ifdef MAX_SEQUENCE_NUMBER
  SET_CONSTANT_NUMBER(target, MAX_SEQUENCE_NUMBER);
#endif /* def MAX_SEQUENCE_NUMBER */

#ifdef MAX_REP_ARRAY_DEPTH
  SET_CONSTANT_NUMBER(target, MAX_REP_ARRAY_DEPTH);
#endif /* def MAX_REP_ARRAY_DEPTH */

}
