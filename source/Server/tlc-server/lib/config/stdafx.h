/* Copyright (c) 2012 BDT Media Automation GmbH
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
 *
 * stdafx.h
 *
 *  Created on: Jul 3, 2012
 *      Author: More Zeng
 */

#pragma once


#include <vector>
#include <set>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;


#include <boost/filesystem.hpp>
#include <boost/thread.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/foreach.hpp>
#include <boost/timer.hpp>
#include <boost/bind.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

namespace fs = boost::filesystem;

#define UInt64_t unsigned long long
#define UInt32_t unsigned long
#define Int64_t long long
#define UInt16_t unsigned int


#include "../common/Common.h"
#if 1
#include "../../log/loggerManager.h"

using namespace ltfs_logger;

#define CfgDebug(msg); LgDebug("simulator", msg);
#define CfgInfo(msg);  LgInfo("simulator", msg);
#define CfgWarn(msg);  LgWarn("simulator", msg);
#define CfgError(msg); LgError("simulator", msg);
#define CfgFatal(msg); LgFatal("simulator", msg);
#define CfgEvent(level, eventId, msg) CmnEvent("simulator", level, eventId, msg)
#else
#define CfgDebug(msg);
#define CfgInfo(msg);
#define CfgWarn(msg);
#define CfgError(msg);
#define CfgError(msg);
#define CfgFatal(msg);
#define CfgEvent(level, eventId, msg)
#endif

