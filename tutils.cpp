#include "tutils.h"

const std::vector<std::string>& tutils::split(const std::string& _toSplit, const std::string& _delimeter)
{
    std::vector<std::string> vect;
    std::string temp;

    int pos = _toSplit.find(_toSplit.c_str());
    int lastPos = 0;

    if (pos == std::string::npos)
    {
        vect.push_back(_toSplit);
        return vect;
    }

    while (pos != std::string::npos)
    {
        for (int i = lastPos; i < pos; ++i)
        {
            temp += _toSplit[i];
        }

        vect.push_back(temp);
        temp = "";

        lastPos = pos;
        pos = _toSplit.find(_toSplit.c_str(), pos);
    }

    return vect;
}
