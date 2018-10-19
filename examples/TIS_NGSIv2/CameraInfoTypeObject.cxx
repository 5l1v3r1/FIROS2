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
 * @file CameraInfoTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "CameraInfo.h"
#include "CameraInfoTypeObject.h"
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registerCameraInfoTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::GetInstance();
    factory->AddTypeObject("GuestLocation", GetGuestLocationIdentifier(true), GetGuestLocationObject(true));
    factory->AddTypeObject("GuestLocation", GetGuestLocationIdentifier(false), GetGuestLocationObject(false));
    factory->AddTypeObject("GuestFeature", GetGuestFeatureIdentifier(true), GetGuestFeatureObject(true));
    factory->AddTypeObject("GuestFeature", GetGuestFeatureIdentifier(false), GetGuestFeatureObject(false));
    factory->AddTypeObject("CameraInfo", GetCameraInfoIdentifier(true), GetCameraInfoObject(true));
    factory->AddTypeObject("CameraInfo", GetCameraInfoIdentifier(false), GetCameraInfoObject(false));
}

const TypeIdentifier* GetGuestLocationIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = GetTypeIdentifier("GuestLocation", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetGuestLocationObject(complete); // Generated inside
    return GetTypeIdentifier("GuestLocation", complete);
}

const TypeObject* GetGuestLocationObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("GuestLocation", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteGuestLocationObject();
    }
    //else
    return GetMinimalGuestLocationObject();
}

const TypeObject* GetMinimalGuestLocationObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("GuestLocation", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false);

    MemberId memberId = 0;
    MinimalStructMember mst_floor;
    mst_floor.common().member_id(memberId++);
    mst_floor.common().member_flags().TRY_CONSTRUCT1(false);
    mst_floor.common().member_flags().TRY_CONSTRUCT2(false);
    mst_floor.common().member_flags().IS_EXTERNAL(false);
    mst_floor.common().member_flags().IS_OPTIONAL(false);
    mst_floor.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_floor.common().member_flags().IS_KEY(false);
    mst_floor.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        mst_floor.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    MD5 floor_hash("floor");
    for(int i = 0; i < 4; ++i)
    {
        mst_floor.detail().name_hash()[i] = floor_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_floor);

    MinimalStructMember mst_x;
    mst_x.common().member_id(memberId++);
    mst_x.common().member_flags().TRY_CONSTRUCT1(false);
    mst_x.common().member_flags().TRY_CONSTRUCT2(false);
    mst_x.common().member_flags().IS_EXTERNAL(false);
    mst_x.common().member_flags().IS_OPTIONAL(false);
    mst_x.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_x.common().member_flags().IS_KEY(false);
    mst_x.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        mst_x.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    MD5 x_hash("x");
    for(int i = 0; i < 4; ++i)
    {
        mst_x.detail().name_hash()[i] = x_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_x);

    MinimalStructMember mst_y;
    mst_y.common().member_id(memberId++);
    mst_y.common().member_flags().TRY_CONSTRUCT1(false);
    mst_y.common().member_flags().TRY_CONSTRUCT2(false);
    mst_y.common().member_flags().IS_EXTERNAL(false);
    mst_y.common().member_flags().IS_OPTIONAL(false);
    mst_y.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_y.common().member_flags().IS_KEY(false);
    mst_y.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        mst_y.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    MD5 y_hash("y");
    for(int i = 0; i < 4; ++i)
    {
        mst_y.detail().name_hash()[i] = y_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_y);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::GetInstance()->AddTypeObject("GuestLocation", &identifier, type_object);
    delete type_object;
    return GetTypeObject("GuestLocation", false);
}

const TypeObject* GetCompleteGuestLocationObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("GuestLocation", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false);

    MemberId memberId = 0;
    CompleteStructMember cst_floor;
    cst_floor.common().member_id(memberId++);
    cst_floor.common().member_flags().TRY_CONSTRUCT1(false);
    cst_floor.common().member_flags().TRY_CONSTRUCT2(false);
    cst_floor.common().member_flags().IS_EXTERNAL(false);
    cst_floor.common().member_flags().IS_OPTIONAL(false);
    cst_floor.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_floor.common().member_flags().IS_KEY(false);
    cst_floor.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        cst_floor.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    cst_floor.detail().name("floor");
    //cst_floor.detail().ann_builtin()...
    //cst_floor.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_floor);

    CompleteStructMember cst_x;
    cst_x.common().member_id(memberId++);
    cst_x.common().member_flags().TRY_CONSTRUCT1(false);
    cst_x.common().member_flags().TRY_CONSTRUCT2(false);
    cst_x.common().member_flags().IS_EXTERNAL(false);
    cst_x.common().member_flags().IS_OPTIONAL(false);
    cst_x.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_x.common().member_flags().IS_KEY(false);
    cst_x.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        cst_x.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    cst_x.detail().name("x");
    //cst_x.detail().ann_builtin()...
    //cst_x.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_x);

    CompleteStructMember cst_y;
    cst_y.common().member_id(memberId++);
    cst_y.common().member_flags().TRY_CONSTRUCT1(false);
    cst_y.common().member_flags().TRY_CONSTRUCT2(false);
    cst_y.common().member_flags().IS_EXTERNAL(false);
    cst_y.common().member_flags().IS_OPTIONAL(false);
    cst_y.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_y.common().member_flags().IS_KEY(false);
    cst_y.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        cst_y.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    cst_y.detail().name("y");
    //cst_y.detail().ann_builtin()...
    //cst_y.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_y);


    // Header
    type_object->complete().struct_type().header().detail().type_name("GuestLocation");
    //type_object->complete().struct_type().header().detail().ann_builtin()...
    //type_object->complete().struct_type().header().detail().ann_custom()...
    // TODO inheritance
    //type_object->complete().struct_type().header().base_type()._d(EK_COMPLETE);
    //type_object->complete().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::GetInstance()->AddTypeObject("GuestLocation", &identifier, type_object);
    delete type_object;
    return GetTypeObject("GuestLocation", true);
}

const TypeIdentifier* GetGuestFeatureIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = GetTypeIdentifier("GuestFeature", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetGuestFeatureObject(complete); // Generated inside
    return GetTypeIdentifier("GuestFeature", complete);
}

const TypeObject* GetGuestFeatureObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("GuestFeature", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteGuestFeatureObject();
    }
    //else
    return GetMinimalGuestFeatureObject();
}

const TypeObject* GetMinimalGuestFeatureObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("GuestFeature", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false);

    MemberId memberId = 0;
    MinimalStructMember mst_color;
    mst_color.common().member_id(memberId++);
    mst_color.common().member_flags().TRY_CONSTRUCT1(false);
    mst_color.common().member_flags().TRY_CONSTRUCT2(false);
    mst_color.common().member_flags().IS_EXTERNAL(false);
    mst_color.common().member_flags().IS_OPTIONAL(false);
    mst_color.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_color.common().member_flags().IS_KEY(false);
    mst_color.common().member_flags().IS_DEFAULT(false);
    mst_color.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    MD5 color_hash("color");
    for(int i = 0; i < 4; ++i)
    {
        mst_color.detail().name_hash()[i] = color_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_color);

    MinimalStructMember mst_other;
    mst_other.common().member_id(memberId++);
    mst_other.common().member_flags().TRY_CONSTRUCT1(false);
    mst_other.common().member_flags().TRY_CONSTRUCT2(false);
    mst_other.common().member_flags().IS_EXTERNAL(false);
    mst_other.common().member_flags().IS_OPTIONAL(false);
    mst_other.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_other.common().member_flags().IS_KEY(false);
    mst_other.common().member_flags().IS_DEFAULT(false);
    mst_other.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    MD5 other_hash("other");
    for(int i = 0; i < 4; ++i)
    {
        mst_other.detail().name_hash()[i] = other_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_other);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::GetInstance()->AddTypeObject("GuestFeature", &identifier, type_object);
    delete type_object;
    return GetTypeObject("GuestFeature", false);
}

const TypeObject* GetCompleteGuestFeatureObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("GuestFeature", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false);

    MemberId memberId = 0;
    CompleteStructMember cst_color;
    cst_color.common().member_id(memberId++);
    cst_color.common().member_flags().TRY_CONSTRUCT1(false);
    cst_color.common().member_flags().TRY_CONSTRUCT2(false);
    cst_color.common().member_flags().IS_EXTERNAL(false);
    cst_color.common().member_flags().IS_OPTIONAL(false);
    cst_color.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_color.common().member_flags().IS_KEY(false);
    cst_color.common().member_flags().IS_DEFAULT(false);
    cst_color.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    cst_color.detail().name("color");
    //cst_color.detail().ann_builtin()...
    //cst_color.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_color);

    CompleteStructMember cst_other;
    cst_other.common().member_id(memberId++);
    cst_other.common().member_flags().TRY_CONSTRUCT1(false);
    cst_other.common().member_flags().TRY_CONSTRUCT2(false);
    cst_other.common().member_flags().IS_EXTERNAL(false);
    cst_other.common().member_flags().IS_OPTIONAL(false);
    cst_other.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_other.common().member_flags().IS_KEY(false);
    cst_other.common().member_flags().IS_DEFAULT(false);
    cst_other.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    cst_other.detail().name("other");
    //cst_other.detail().ann_builtin()...
    //cst_other.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_other);


    // Header
    type_object->complete().struct_type().header().detail().type_name("GuestFeature");
    //type_object->complete().struct_type().header().detail().ann_builtin()...
    //type_object->complete().struct_type().header().detail().ann_custom()...
    // TODO inheritance
    //type_object->complete().struct_type().header().base_type()._d(EK_COMPLETE);
    //type_object->complete().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::GetInstance()->AddTypeObject("GuestFeature", &identifier, type_object);
    delete type_object;
    return GetTypeObject("GuestFeature", true);
}

const TypeIdentifier* GetCameraInfoIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = GetTypeIdentifier("CameraInfo", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetCameraInfoObject(complete); // Generated inside
    return GetTypeIdentifier("CameraInfo", complete);
}

const TypeObject* GetCameraInfoObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("CameraInfo", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteCameraInfoObject();
    }
    //else
    return GetMinimalCameraInfoObject();
}

const TypeObject* GetMinimalCameraInfoObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("CameraInfo", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false);

    MemberId memberId = 0;
    MinimalStructMember mst_camera_id;
    mst_camera_id.common().member_id(memberId++);
    mst_camera_id.common().member_flags().TRY_CONSTRUCT1(false);
    mst_camera_id.common().member_flags().TRY_CONSTRUCT2(false);
    mst_camera_id.common().member_flags().IS_EXTERNAL(false);
    mst_camera_id.common().member_flags().IS_OPTIONAL(false);
    mst_camera_id.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_camera_id.common().member_flags().IS_KEY(false);
    mst_camera_id.common().member_flags().IS_DEFAULT(false);
    mst_camera_id.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    MD5 camera_id_hash("camera_id");
    for(int i = 0; i < 4; ++i)
    {
        mst_camera_id.detail().name_hash()[i] = camera_id_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_camera_id);

    MinimalStructMember mst_transmission_time;
    mst_transmission_time.common().member_id(memberId++);
    mst_transmission_time.common().member_flags().TRY_CONSTRUCT1(false);
    mst_transmission_time.common().member_flags().TRY_CONSTRUCT2(false);
    mst_transmission_time.common().member_flags().IS_EXTERNAL(false);
    mst_transmission_time.common().member_flags().IS_OPTIONAL(false);
    mst_transmission_time.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_transmission_time.common().member_flags().IS_KEY(false);
    mst_transmission_time.common().member_flags().IS_DEFAULT(false);
    mst_transmission_time.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    MD5 transmission_time_hash("transmission_time");
    for(int i = 0; i < 4; ++i)
    {
        mst_transmission_time.detail().name_hash()[i] = transmission_time_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_transmission_time);

    MinimalStructMember mst_number_of_people;
    mst_number_of_people.common().member_id(memberId++);
    mst_number_of_people.common().member_flags().TRY_CONSTRUCT1(false);
    mst_number_of_people.common().member_flags().TRY_CONSTRUCT2(false);
    mst_number_of_people.common().member_flags().IS_EXTERNAL(false);
    mst_number_of_people.common().member_flags().IS_OPTIONAL(false);
    mst_number_of_people.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_number_of_people.common().member_flags().IS_KEY(false);
    mst_number_of_people.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        mst_number_of_people.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    MD5 number_of_people_hash("number_of_people");
    for(int i = 0; i < 4; ++i)
    {
        mst_number_of_people.detail().name_hash()[i] = number_of_people_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_number_of_people);

    MinimalStructMember mst_guest_locations;
    mst_guest_locations.common().member_id(memberId++);
    mst_guest_locations.common().member_flags().TRY_CONSTRUCT1(false);
    mst_guest_locations.common().member_flags().TRY_CONSTRUCT2(false);
    mst_guest_locations.common().member_flags().IS_EXTERNAL(false);
    mst_guest_locations.common().member_flags().IS_OPTIONAL(false);
    mst_guest_locations.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_guest_locations.common().member_flags().IS_KEY(false);
    mst_guest_locations.common().member_flags().IS_DEFAULT(false);
    mst_guest_locations.common().member_type_id(*TypeObjectFactory::GetInstance()->GetSequenceIdentifier("GuestLocation", 100, false));


    MD5 guest_locations_hash("guest_locations");
    for(int i = 0; i < 4; ++i)
    {
        mst_guest_locations.detail().name_hash()[i] = guest_locations_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_guest_locations);

    MinimalStructMember mst_guest_features;
    mst_guest_features.common().member_id(memberId++);
    mst_guest_features.common().member_flags().TRY_CONSTRUCT1(false);
    mst_guest_features.common().member_flags().TRY_CONSTRUCT2(false);
    mst_guest_features.common().member_flags().IS_EXTERNAL(false);
    mst_guest_features.common().member_flags().IS_OPTIONAL(false);
    mst_guest_features.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_guest_features.common().member_flags().IS_KEY(false);
    mst_guest_features.common().member_flags().IS_DEFAULT(false);
    mst_guest_features.common().member_type_id(*TypeObjectFactory::GetInstance()->GetSequenceIdentifier("GuestFeature", 100, false));


    MD5 guest_features_hash("guest_features");
    for(int i = 0; i < 4; ++i)
    {
        mst_guest_features.detail().name_hash()[i] = guest_features_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_guest_features);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::GetInstance()->AddTypeObject("CameraInfo", &identifier, type_object);
    delete type_object;
    return GetTypeObject("CameraInfo", false);
}

const TypeObject* GetCompleteCameraInfoObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::GetInstance()->GetTypeObject("CameraInfo", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false);

    MemberId memberId = 0;
    CompleteStructMember cst_camera_id;
    cst_camera_id.common().member_id(memberId++);
    cst_camera_id.common().member_flags().TRY_CONSTRUCT1(false);
    cst_camera_id.common().member_flags().TRY_CONSTRUCT2(false);
    cst_camera_id.common().member_flags().IS_EXTERNAL(false);
    cst_camera_id.common().member_flags().IS_OPTIONAL(false);
    cst_camera_id.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_camera_id.common().member_flags().IS_KEY(false);
    cst_camera_id.common().member_flags().IS_DEFAULT(false);
    cst_camera_id.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    cst_camera_id.detail().name("camera_id");
    //cst_camera_id.detail().ann_builtin()...
    //cst_camera_id.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_camera_id);

    CompleteStructMember cst_transmission_time;
    cst_transmission_time.common().member_id(memberId++);
    cst_transmission_time.common().member_flags().TRY_CONSTRUCT1(false);
    cst_transmission_time.common().member_flags().TRY_CONSTRUCT2(false);
    cst_transmission_time.common().member_flags().IS_EXTERNAL(false);
    cst_transmission_time.common().member_flags().IS_OPTIONAL(false);
    cst_transmission_time.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_transmission_time.common().member_flags().IS_KEY(false);
    cst_transmission_time.common().member_flags().IS_DEFAULT(false);
    cst_transmission_time.common().member_type_id(*TypeObjectFactory::GetInstance()->GetStringIdentifier(255, false));


    cst_transmission_time.detail().name("transmission_time");
    //cst_transmission_time.detail().ann_builtin()...
    //cst_transmission_time.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_transmission_time);

    CompleteStructMember cst_number_of_people;
    cst_number_of_people.common().member_id(memberId++);
    cst_number_of_people.common().member_flags().TRY_CONSTRUCT1(false);
    cst_number_of_people.common().member_flags().TRY_CONSTRUCT2(false);
    cst_number_of_people.common().member_flags().IS_EXTERNAL(false);
    cst_number_of_people.common().member_flags().IS_OPTIONAL(false);
    cst_number_of_people.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_number_of_people.common().member_flags().IS_KEY(false);
    cst_number_of_people.common().member_flags().IS_DEFAULT(false);
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        cst_number_of_people.common().member_type_id(*GetTypeIdentifier(cppType, false));
    }

    cst_number_of_people.detail().name("number_of_people");
    //cst_number_of_people.detail().ann_builtin()...
    //cst_number_of_people.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_number_of_people);

    CompleteStructMember cst_guest_locations;
    cst_guest_locations.common().member_id(memberId++);
    cst_guest_locations.common().member_flags().TRY_CONSTRUCT1(false);
    cst_guest_locations.common().member_flags().TRY_CONSTRUCT2(false);
    cst_guest_locations.common().member_flags().IS_EXTERNAL(false);
    cst_guest_locations.common().member_flags().IS_OPTIONAL(false);
    cst_guest_locations.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_guest_locations.common().member_flags().IS_KEY(false);
    cst_guest_locations.common().member_flags().IS_DEFAULT(false);
    cst_guest_locations.common().member_type_id(*TypeObjectFactory::GetInstance()->GetSequenceIdentifier("GuestLocation", 100, true));


    cst_guest_locations.detail().name("guest_locations");
    //cst_guest_locations.detail().ann_builtin()...
    //cst_guest_locations.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_guest_locations);

    CompleteStructMember cst_guest_features;
    cst_guest_features.common().member_id(memberId++);
    cst_guest_features.common().member_flags().TRY_CONSTRUCT1(false);
    cst_guest_features.common().member_flags().TRY_CONSTRUCT2(false);
    cst_guest_features.common().member_flags().IS_EXTERNAL(false);
    cst_guest_features.common().member_flags().IS_OPTIONAL(false);
    cst_guest_features.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_guest_features.common().member_flags().IS_KEY(false);
    cst_guest_features.common().member_flags().IS_DEFAULT(false);
    cst_guest_features.common().member_type_id(*TypeObjectFactory::GetInstance()->GetSequenceIdentifier("GuestFeature", 100, true));


    cst_guest_features.detail().name("guest_features");
    //cst_guest_features.detail().ann_builtin()...
    //cst_guest_features.detail().ann_custom()...
    type_object->complete().struct_type().member_seq().emplace_back(cst_guest_features);


    // Header
    type_object->complete().struct_type().header().detail().type_name("CameraInfo");
    //type_object->complete().struct_type().header().detail().ann_builtin()...
    //type_object->complete().struct_type().header().detail().ann_custom()...
    // TODO inheritance
    //type_object->complete().struct_type().header().base_type()._d(EK_COMPLETE);
    //type_object->complete().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::GetInstance()->AddTypeObject("CameraInfo", &identifier, type_object);
    delete type_object;
    return GetTypeObject("CameraInfo", true);
}