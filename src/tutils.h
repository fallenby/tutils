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

#ifndef TUTILS_H
#define TUTILS_H

#include <string>
#include <vector>
#include <sstream>

namespace tutils
{

    // Function to split a string into a vector of its substrings by a predefined delimeter.
    // e.g. "Hello world!" split with the delimeter of a space would give the vector result of
    //      {"Hello", "world!"}.
    void split(std::vector<std::string>& _out, const std::string& _toSplit, const std::string& _delimeter)
    {
        std::string temp;

        unsigned pos = _toSplit.find(_delimeter.c_str());

        if (pos > _toSplit.length())
        {
            _out.push_back(_toSplit);
            return;
        }

        unsigned lastPos = 0;

        while (pos < _toSplit.length())
        {
            for (unsigned i = lastPos; i < pos; ++i)
            {
                temp += _toSplit[i];
            }

            _out.push_back(temp);
            temp = "";

            lastPos = pos + _delimeter.length();
            pos = _toSplit.find(_delimeter.c_str(), pos + 1);
        }

        if (lastPos == _toSplit.length())
        {
            return;
        }

        for (unsigned i = lastPos; i < _toSplit.length(); ++i)
        {
            temp += _toSplit[i];
        }
        _out.push_back(temp);
    }

    // Function to convert from any type to any other type
    // provided that the correct operators are overloaded.
    // A compiler error should be thrown if an invalid conversion is attempted.
    template <class FROM, class TO>
    TO convert(const FROM& _f)
    {
        TO temp;
        std::stringstream stream;

        stream << _f;
        stream >> temp;

        return temp;
    }

} // namespace tutils

#endif
