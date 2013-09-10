/*
    tutils - a library of functions with some use.
    Copyright (C) 2013  Frank Allenby

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see http://www.gnu.org/licenses/.
*/

#ifndef CONVERT_TO_CPP
#define CONVERT_TO_CPP

#include "tutils.h"

template <class FROM, class TO>
TO tutils::convertTo(const FROM& _f)
{
    TO temp;
    std::stringstream stream;

    stream << _f;
    stream >> temp;

    return temp;
}

#endif
