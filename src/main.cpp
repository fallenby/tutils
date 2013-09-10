#include "tutils.h"

#include <iostream>

int main()
{
    //std::vector<std::string> vect = tutils::split("I,am,comma,delimeted", ",");
    std::vector<std::string> vect = tutils::split("1ham2ham3ham4", "am");

    for (unsigned i = 0; i < vect.size(); ++i)
    {
        std::cout << vect[i] << std::endl;
    }

    int a = 4;
    double str = tutils::convertTo<int, double>(a);

    std::cout << std::endl;
    std::cout << a << std::endl;
    std::cout << str << std::endl;

    return 0;
}
