// -*-C++-*-
// stream_funcs.h (WFMath library string utility functions)
//
//  The WorldForge Project
//  Copyright (C) 2001  The WorldForge Project
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
//  For information about WorldForge and its authors, please contact
//  the Worldforge Web Site at http://www.worldforge.org.

// Author: Ron Steinke
// Created: 2001-12-7

#ifndef WFMATH_STRING_FUNCS_H
#define WFMATH_STRING_FUNCS_H

#include <wfmath/const.h>
#include <string>

namespace WF { namespace Math {

bool StringToCoordList(const std::string& s, CoordType* d, const int num);
std::string StringFromCoordList(const CoordType* d, const int num);

bool StringToCoordArray(const std::string& s, CoordType* d, const int rows,
			const int columns);
std::string StringFromCoordArray(const CoordType* d, const int rows,
				 const int columns);

}} // namespace WF::Math

#endif // WFMATH_STRING_FUNCS_H