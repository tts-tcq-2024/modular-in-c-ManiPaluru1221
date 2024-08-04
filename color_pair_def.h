enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[];
int numberOfMajorColors;
const char* MinorColorNames[];
const int MAX_COLORPAIR_NAME_CHARS;
int numberOfMinorColors;

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