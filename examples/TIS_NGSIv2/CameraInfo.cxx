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
 * @file CameraInfo.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "CameraInfo.h"

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

GuestLocation::GuestLocation()
{
    m_floor = 0;
    m_x = 0;
    m_y = 0;
}

GuestLocation::~GuestLocation()
{
}

GuestLocation::GuestLocation(const GuestLocation &x)
{
    m_floor = x.m_floor;
    m_x = x.m_x;
    m_y = x.m_y;
}

GuestLocation::GuestLocation(GuestLocation &&x)
{
    m_floor = x.m_floor;
    m_x = x.m_x;
    m_y = x.m_y;
}

GuestLocation& GuestLocation::operator=(const GuestLocation &x)
{
    m_floor = x.m_floor;
    m_x = x.m_x;
    m_y = x.m_y;
    
    return *this;
}

GuestLocation& GuestLocation::operator=(GuestLocation &&x)
{
    m_floor = x.m_floor;
    m_x = x.m_x;
    m_y = x.m_y;
    
    return *this;
}

size_t GuestLocation::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t GuestLocation::getCdrSerializedSize(const GuestLocation& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void GuestLocation::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_floor;
    scdr << m_x;
    scdr << m_y;
}

void GuestLocation::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_floor;
    dcdr >> m_x;
    dcdr >> m_y;
}

size_t GuestLocation::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            




    return current_align;
}

bool GuestLocation::isKeyDefined()
{
    return false;
}

void GuestLocation::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
	 
}
GuestFeature::GuestFeature()
{


}

GuestFeature::~GuestFeature()
{
}

GuestFeature::GuestFeature(const GuestFeature &x)
{
    m_color = x.m_color;
    m_other = x.m_other;
}

GuestFeature::GuestFeature(GuestFeature &&x)
{
    m_color = std::move(x.m_color);
    m_other = std::move(x.m_other);
}

GuestFeature& GuestFeature::operator=(const GuestFeature &x)
{
    m_color = x.m_color;
    m_other = x.m_other;
    
    return *this;
}

GuestFeature& GuestFeature::operator=(GuestFeature &&x)
{
    m_color = std::move(x.m_color);
    m_other = std::move(x.m_other);
    
    return *this;
}

size_t GuestFeature::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t GuestFeature::getCdrSerializedSize(const GuestFeature& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.color().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.other().size() + 1;


    return current_alignment - initial_alignment;
}

void GuestFeature::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_color;
    scdr << m_other;
}

void GuestFeature::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_color;
    dcdr >> m_other;
}

size_t GuestFeature::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            



    return current_align;
}

bool GuestFeature::isKeyDefined()
{
    return false;
}

void GuestFeature::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
}
CameraInfo::CameraInfo()
{


    m_number_of_people = 0;


}

CameraInfo::~CameraInfo()
{
}

CameraInfo::CameraInfo(const CameraInfo &x)
{
    m_camera_id = x.m_camera_id;
    m_transmission_time = x.m_transmission_time;
    m_number_of_people = x.m_number_of_people;
    m_guest_locations = x.m_guest_locations;
    m_guest_features = x.m_guest_features;
}

CameraInfo::CameraInfo(CameraInfo &&x)
{
    m_camera_id = std::move(x.m_camera_id);
    m_transmission_time = std::move(x.m_transmission_time);
    m_number_of_people = x.m_number_of_people;
    m_guest_locations = std::move(x.m_guest_locations);
    m_guest_features = std::move(x.m_guest_features);
}

CameraInfo& CameraInfo::operator=(const CameraInfo &x)
{
    m_camera_id = x.m_camera_id;
    m_transmission_time = x.m_transmission_time;
    m_number_of_people = x.m_number_of_people;
    m_guest_locations = x.m_guest_locations;
    m_guest_features = x.m_guest_features;
    
    return *this;
}

CameraInfo& CameraInfo::operator=(CameraInfo &&x)
{
    m_camera_id = std::move(x.m_camera_id);
    m_transmission_time = std::move(x.m_transmission_time);
    m_number_of_people = x.m_number_of_people;
    m_guest_locations = std::move(x.m_guest_locations);
    m_guest_features = std::move(x.m_guest_features);
    
    return *this;
}

size_t CameraInfo::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += GuestLocation::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += GuestFeature::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t CameraInfo::getCdrSerializedSize(const CameraInfo& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.camera_id().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.transmission_time().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < data.guest_locations().size(); ++a)
    {
        current_alignment += GuestLocation::getCdrSerializedSize(data.guest_locations().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < data.guest_features().size(); ++a)
    {
        current_alignment += GuestFeature::getCdrSerializedSize(data.guest_features().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void CameraInfo::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_camera_id;
    scdr << m_transmission_time;
    scdr << m_number_of_people;
    scdr << m_guest_locations;
    scdr << m_guest_features;
}

void CameraInfo::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_camera_id;
    dcdr >> m_transmission_time;
    dcdr >> m_number_of_people;
    dcdr >> m_guest_locations;
    dcdr >> m_guest_features;
}

size_t CameraInfo::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            






    return current_align;
}

bool CameraInfo::isKeyDefined()
{
    return false;
}

void CameraInfo::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
	 
	 
	 
}