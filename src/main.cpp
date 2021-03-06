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
    std::vector<std::string> vect;

    tutils::getFilesInDirRecursive(vect, "./Maps", ".txt");

    for (unsigned i = 0; i < vect.size(); ++i)
    {
        std::cout << vect[i] << std::endl;
    }

    return 0;
}
