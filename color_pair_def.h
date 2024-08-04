enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];

extern int numberOfMajorColors;

extern const char* MinorColorNames[];

extern int numberOfMinorColors;

#define MAX_COLORPAIR_NAME_CHARS 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair*, char*);

ColorPair GetColorFromPairNumber(int);

int GetPairNumberFromColor(const ColorPair*);

void testNumberToPair(int,
    enum MajorColor,
    enum MinorColor);

void testPairToNumber(
    enum MajorColor,
    enum MinorColor,
    int);
