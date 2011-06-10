/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

#include "ctkSettingsPanelTest2Helper.h"

// --------------------------------------------------------------------------
QStringList ctkSettingsPanelTest2Helper::list()const
{
  return this->List;
}

// --------------------------------------------------------------------------
void ctkSettingsPanelTest2Helper::setList(const QStringList& alist)
{
  if (alist != this->List)
    {
    this->List = alist;
    emit this->listChanged();
    }
}
