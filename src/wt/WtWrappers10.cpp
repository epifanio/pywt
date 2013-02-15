// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2013 Emweb bvba, Belgium.
 *
 * See the LICENSE file for terms of use.
 */


#define MODPREFIX "wt."

#include <vector>
#include <map>
#include <string>
typedef std::vector<std::string> ArgumentValues;
typedef std::map<std::string, ArgumentValues> ArgumentMap;


#include <Python.h>
#include <WObject>

#include "gwt_Conversion.h"

#include "gwt_includeTypes10.h"
#include "includeTemplateTypes.h"
//#include "gwt_EnumConversions.h"

#include "gwt_includeWrapperImpl10.h"
