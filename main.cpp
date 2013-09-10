#include "tutils.h"

#include <iostream>

int main()
{
    std::vector<std::string> vect = tutils::split("I,am,comma,delimeted", ",");

    for (unsigned i = 0; i < vect.size(); ++i)
    {
        std::cout << vect[i] << std::endl;
    }

    return 0;
}
