/*
 *  Copyright (C) 2010-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "FileItem.h"
#include "video/Bookmark.h"
#include "cores/VideoSettings.h"

class CSaveFileState
{
public:
  static void DoWork(CFileItem& item,
                     CBookmark& bookmark,
                     bool updatePlayCount);
};

