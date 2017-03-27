// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file String_PubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _STRING__PUBSUBTYPES_H_
#define _STRING__PUBSUBTYPES_H_

#include <fastrtps/TopicDataType.h>

using namespace eprosima::fastrtps;

#include "String_.h"

namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            /*!
             * @brief This class represents the TopicDataType of the type String_ defined by the user in the IDL file.
             * @ingroup STRING_
             */
            class String_PubSubType : public TopicDataType {
            public:
                    typedef String_ type;

            	eProsima_user_DllExport String_PubSubType();
            	virtual eProsima_user_DllExport ~String_PubSubType();
            	eProsima_user_DllExport bool serialize(void *data, SerializedPayload_t *payload);
            	eProsima_user_DllExport bool deserialize(SerializedPayload_t *payload, void *data);
                    std::function<uint32_t()> getSerializedSizeProvider(void* data);
            	eProsima_user_DllExport bool getKey(void *data, InstanceHandle_t *ihandle);
            	eProsima_user_DllExport void* createData();
            	eProsima_user_DllExport void deleteData(void * data);
            	MD5 m_md5;
            	unsigned char* m_keyBuffer;
            };
        }
    }
}

#endif // _String__PUBSUBTYPE_H_
