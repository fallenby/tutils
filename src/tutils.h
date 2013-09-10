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
    std::vector<std::string> split(const std::string& _toSplit, const std::string& _delimeter)
    {
        std::vector<std::string> vect;
        std::string temp;

        unsigned pos = _toSplit.find(_delimeter.c_str());

        if (pos > _toSplit.length())
        {
            vect.push_back(_toSplit);
            return vect;
        }

        unsigned lastPos = 0;

        while (pos < _toSplit.length())
        {
            for (unsigned i = lastPos; i < pos; ++i)
            {
                temp += _toSplit[i];
            }

            vect.push_back(temp);
            temp = "";

            lastPos = pos + _delimeter.length();
            pos = _toSplit.find(_delimeter.c_str(), pos + 1);
        }

        if (lastPos == _toSplit.length())
        {
            return vect;
        }

        for (unsigned i = lastPos; i < _toSplit.length(); ++i)
        {
            temp += _toSplit[i];
        }
        vect.push_back(temp);

        return vect;
    }

    template <class FROM, class TO>
    TO convertTo(const FROM& _f)
    {
        TO temp;
        std::stringstream stream;

        stream << _f;
        stream >> temp;

        return temp;
    }
}

#endif
