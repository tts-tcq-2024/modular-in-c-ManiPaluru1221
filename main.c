#include <stdio.h>
#include <assert.h> 
#include "color_pair_def.h"


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    const char* ref_man = reference_manual();  
    printf("%s", ref_man);
    return 0;
}
