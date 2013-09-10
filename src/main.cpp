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

#include "tutils.h"

#include <iostream>

// Test tutils here.

int main()
{
    //std::vector<std::string> vect = tutils::split("I,am,comma,delimeted", ",");
    std::vector<std::string> vect = tutils::split("1ham2ham3ham4", "am");

    for (unsigned i = 0; i < vect.size(); ++i)
    {
        std::cout << vect[i] << std::endl;
    }

    std::string a = "14890";
    long str = tutils::convert<std::string, long>(a);

    std::cout << std::endl;
    std::cout << a << std::endl;
    std::cout << str << std::endl;

    return 0;
}
