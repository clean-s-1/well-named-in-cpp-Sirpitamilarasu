#include "ColorPair.h"

using namespace TelCoColorCoder;

ColorPair::ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor)
{
}

std::string ColorPair::ToString() {
    std::string colorPairStr = "";
    colorPairStr = MajorColorNames[this->majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[this->minorColor];
    return colorPairStr;
}