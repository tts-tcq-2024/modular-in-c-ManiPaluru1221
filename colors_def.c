#include "color_pair_def.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
