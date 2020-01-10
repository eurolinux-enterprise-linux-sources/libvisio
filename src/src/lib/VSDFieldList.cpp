/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* libvisio
 * Version: MPL 1.1 / GPLv2+ / LGPLv2+
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License or as specified alternatively below. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * Major Contributor(s):
 * Copyright (C) 2011 Fridrich Strba <fridrich.strba@bluewin.ch>
 * Copyright (C) 2011 Eilidh McAdam <tibbylickle@gmail.com>
 *
 *
 * All Rights Reserved.
 *
 * For minor contributions see the git repository.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPLv2+"), or
 * the GNU Lesser General Public License Version 2 or later (the "LGPLv2+"),
 * in which case the provisions of the GPLv2+ or the LGPLv2+ are applicable
 * instead of those above.
 */

#include <time.h>
#include "VSDCollector.h"
#include "VSDFieldList.h"

void libvisio::VSDTextField::handle(VSDCollector *collector) const
{
  collector->collectTextField(m_id, m_level, m_nameId, m_formatStringId);
}

libvisio::VSDFieldListElement *libvisio::VSDTextField::clone()
{
  return new VSDTextField(m_id, m_level, m_nameId, m_formatStringId);
}

WPXString libvisio::VSDTextField::getString(const std::map<unsigned, WPXString> &strVec)
{
  std::map<unsigned, WPXString>::const_iterator iter = strVec.find(m_nameId);
  if (iter != strVec.end())
    return iter->second;
  else
    return WPXString();
}

void libvisio::VSDTextField::setNameId(int nameId)
{
  m_nameId = nameId;
}


void libvisio::VSDNumericField::handle(VSDCollector *collector) const
{
  collector->collectNumericField(m_id, m_level, m_format, m_number, m_formatStringId);
}

libvisio::VSDFieldListElement *libvisio::VSDNumericField::clone()
{
  return new VSDNumericField(m_id, m_level, m_format, m_number, m_formatStringId);
}

#define MAX_BUFFER 1024

WPXString libvisio::VSDNumericField::datetimeToString(const char *format, double datetime)
{
  WPXString result;
  char buffer[MAX_BUFFER];
  time_t timer = (time_t)(86400 * datetime - 2209161600.0);
  const struct tm *const time = gmtime(&timer);
  if (time)
  {
    strftime(&buffer[0], MAX_BUFFER-1, format, time);
    result.append(&buffer[0]);
  }
  return result;
}

WPXString libvisio::VSDNumericField::getString(const std::map<unsigned, WPXString> &)
{
  if (m_format == 0xffff)
    return WPXString();
  switch (m_format)
  {
  case VSD_FIELD_FORMAT_DateMDYY:
  case VSD_FIELD_FORMAT_DateMMDDYY:
  case VSD_FIELD_FORMAT_DateMmmDYYYY:
  case VSD_FIELD_FORMAT_DateMmmmDYYYY:
  case VSD_FIELD_FORMAT_DateDMYY:
  case VSD_FIELD_FORMAT_DateDDMMYY:
  case VSD_FIELD_FORMAT_DateDMMMYYYY:
  case VSD_FIELD_FORMAT_DateDMMMMYYYY:
  case VSD_FIELD_FORMAT_Dateyyyymd:
  case VSD_FIELD_FORMAT_Dateyymmdd:
  case VSD_FIELD_FORMAT_DateTWNfYYYYMMDDD_C:
  case VSD_FIELD_FORMAT_DateTWNsYYYYMMDDD_C:
  case VSD_FIELD_FORMAT_DateTWNfyyyymmddww_C:
  case VSD_FIELD_FORMAT_DateTWNfyyyymmdd_C:
  case VSD_FIELD_FORMAT_Dategggemdww_J:
  case VSD_FIELD_FORMAT_Dateyyyymdww_J:
  case VSD_FIELD_FORMAT_Dategggemd_J:
  case VSD_FIELD_FORMAT_Dateyyyymd_J:
  case VSD_FIELD_FORMAT_DateYYYYMMMDDDWWW_C:
  case VSD_FIELD_FORMAT_DateYYYYMMMDDD_C:
  case VSD_FIELD_FORMAT_DategeMMMMddddww_K:
  case VSD_FIELD_FORMAT_Dateyyyymdww_K:
  case VSD_FIELD_FORMAT_DategeMMMMddd_K:
  case VSD_FIELD_FORMAT_Dateyyyymd_K:
  case VSD_FIELD_FORMAT_Dateyyyy_m_d:
  case VSD_FIELD_FORMAT_Dateyy_mm_dd:
  case VSD_FIELD_FORMAT_Dateyyyymd_S:
  case VSD_FIELD_FORMAT_Dateyyyymmdd_S:
  case VSD_FIELD_FORMAT_Datewwyyyymmdd_S:
  case VSD_FIELD_FORMAT_Datewwyyyymd_S:
  case VSD_FIELD_FORMAT_MsoDateShort:
  case VSD_FIELD_FORMAT_MsoDateLongDay:
  case VSD_FIELD_FORMAT_MsoDateLong:
  case VSD_FIELD_FORMAT_MsoDateShortAlt:
  case VSD_FIELD_FORMAT_MsoDateISO:
  case VSD_FIELD_FORMAT_MsoDateShortMon:
  case VSD_FIELD_FORMAT_MsoDateShortSlash:
  case VSD_FIELD_FORMAT_MsoDateShortAbb:
  case VSD_FIELD_FORMAT_MsoDateEnglish:
  case VSD_FIELD_FORMAT_MsoDateMonthYr:
  case VSD_FIELD_FORMAT_MsoDateMon_Yr:
    return datetimeToString("%x", m_number);
  case VSD_FIELD_FORMAT_TimeGen:
  case VSD_FIELD_FORMAT_TimeHMM:
  case VSD_FIELD_FORMAT_TimeHHMM:
  case VSD_FIELD_FORMAT_TimeHMM24:
  case VSD_FIELD_FORMAT_TimeHHMM24:
  case VSD_FIELD_FORMAT_TimeHMMAMPM:
  case VSD_FIELD_FORMAT_TimeHHMMAMPM:
  case VSD_FIELD_FORMAT_TimeAMPMhmm_J:
  case VSD_FIELD_FORMAT_TimeAMPMhmm_C:
  case VSD_FIELD_FORMAT_TimeAMPMhmm_K:
  case VSD_FIELD_FORMAT_TimeAMPM_hmm_J:
  case VSD_FIELD_FORMAT_Timehmm_J:
  case VSD_FIELD_FORMAT_TimeAMPM_hmm_C:
  case VSD_FIELD_FORMAT_Timehmm_C:
  case VSD_FIELD_FORMAT_TimeAMPM_hmm_K:
  case VSD_FIELD_FORMAT_Timehmm_K:
  case VSD_FIELD_FORMAT_TimeHMMAMPM_E:
  case VSD_FIELD_FORMAT_TimeHHMMAMPM_E:
  case VSD_FIELD_FORMAT_TimeAMPMhmm_S:
  case VSD_FIELD_FORMAT_TimeAMPMhhmm_S:
  case VSD_FIELD_FORMAT_MsoTimePM:
  case VSD_FIELD_FORMAT_MsoTimeSecPM:
  case VSD_FIELD_FORMAT_MsoTime24:
  case VSD_FIELD_FORMAT_MsoTimeSec24:
    return datetimeToString("%X", m_number);
  case VSD_FIELD_FORMAT_MsoTimeDatePM:
  case VSD_FIELD_FORMAT_MsoTimeDateSecPM:
    return datetimeToString("%x %X", m_number);
  default:
  {
    WPXString result;
    WPXProperty *pProp = WPXPropertyFactory::newDoubleProp(m_number);
    if (pProp)
    {
      result = pProp->getStr();
      delete pProp;
    }
    return result;
  }
  }
}

void libvisio::VSDNumericField::setFormat(unsigned short format)
{
  m_format = format;
}
void libvisio::VSDNumericField::setValue(double number)
{
  m_number = number;
}


libvisio::VSDFieldList::VSDFieldList() :
  m_elements(),
  m_elementsOrder(),
  m_id(0),
  m_level(0)
{
}

libvisio::VSDFieldList::VSDFieldList(const libvisio::VSDFieldList &fieldList) :
  m_elements(),
  m_elementsOrder(fieldList.m_elementsOrder),
  m_id(fieldList.m_id),
  m_level(fieldList.m_level)
{
  std::map<unsigned, VSDFieldListElement *>::const_iterator iter = fieldList.m_elements.begin();
  for (; iter != fieldList.m_elements.end(); ++iter)
    m_elements[iter->first] = iter->second->clone();
}

libvisio::VSDFieldList &libvisio::VSDFieldList::operator=(const libvisio::VSDFieldList &fieldList)
{
  if (this != &fieldList)
  {
    clear();
    std::map<unsigned, VSDFieldListElement *>::const_iterator iter = fieldList.m_elements.begin();
    for (; iter != fieldList.m_elements.end(); ++iter)
      m_elements[iter->first] = iter->second->clone();
    m_elementsOrder = fieldList.m_elementsOrder;
    m_id = fieldList.m_id;
    m_level = fieldList.m_level;
  }
  return *this;
}

libvisio::VSDFieldList::~VSDFieldList()
{
  clear();
}

void libvisio::VSDFieldList::setElementsOrder(const std::vector<unsigned> &elementsOrder)
{
  m_elementsOrder.clear();
  for (unsigned i = 0; i<elementsOrder.size(); i++)
    m_elementsOrder.push_back(elementsOrder[i]);
}

void libvisio::VSDFieldList::addFieldList(unsigned id, unsigned level)
{
  m_id = id;
  m_level = level;
}

void libvisio::VSDFieldList::addTextField(unsigned id, unsigned level, int nameId, int formatStringId)
{
  m_elements[id] = new VSDTextField(id, level, nameId, formatStringId);
}

void libvisio::VSDFieldList::addNumericField(unsigned id, unsigned level, unsigned short format, double number, int formatStringId)
{
  m_elements[id] = new VSDNumericField(id, level, format, number, formatStringId);
}

void libvisio::VSDFieldList::handle(VSDCollector *collector) const
{
  if (empty())
    return;

  collector->collectFieldList(m_id, m_level);
  std::map<unsigned, VSDFieldListElement *>::const_iterator iter;
  if (!m_elementsOrder.empty())
  {
    for (unsigned i = 0; i < m_elementsOrder.size(); i++)
    {
      iter = m_elements.find(m_elementsOrder[i]);
      if (iter != m_elements.end())
        iter->second->handle(collector);
    }
  }
  else
  {
    for (iter = m_elements.begin(); iter != m_elements.end(); ++iter)
      iter->second->handle(collector);
  }
}

void libvisio::VSDFieldList::clear()
{
  for (std::map<unsigned, VSDFieldListElement *>::iterator iter = m_elements.begin(); iter != m_elements.end(); ++iter)
    delete iter->second;
  m_elements.clear();
  m_elementsOrder.clear();
}

libvisio::VSDFieldListElement *libvisio::VSDFieldList::getElement(unsigned index)
{
  if (m_elementsOrder.size() > index)
    index = m_elementsOrder[index];

  std::map<unsigned, VSDFieldListElement *>::const_iterator iter = m_elements.find(index);
  if (iter != m_elements.end())
    return iter->second;
  else
    return 0;
}
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
