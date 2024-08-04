#include <stdio.h>
#include <string.h>
#include "color_pair_def.h"


#define BUFFER_SIZE 2048
#define LINE_SIZE_LIMIT 40

const char* reference_manual() {
    char ref_man[BUFFER_SIZE];
    char print_line[LINE_SIZE_LIMIT];
    ref_man[0] = '\n';
    strcat(ref_man, "REFERENCE MANUAL\n");
    strcat(ref_man, "*****************************\n");
    for (int i = 0; i < (numberOfMajorColors * numberOfMinorColors); ++i) {
        char pair_name[MAX_COLORPAIR_NAME_CHARS];
        ColorPair colorPair = GetColorFromPairNumber(i+1);
        ColorPairToString(&colorPair, pair_name);
        snprintf(print_line, sizeof(print_line), "(%d) %s\n", i+1, pair_name);
        strcat(ref_man, line);
        }
    strcat(ref_man, "*****************************\n");
    return ref_man;
}
