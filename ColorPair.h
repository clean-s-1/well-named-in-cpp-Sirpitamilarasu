#ifndef _COLORPAIR_H_
#define _COLORPAIR_H_

#include <string>

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    static const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    static int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    static const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    static int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
       
        inline MajorColor getMajor() {
            return majorColor;
        }
        inline MinorColor getMinor() {
            return minorColor;
        }
        std::string ToString();
    };

}

#endif _COLORPAIR_H_