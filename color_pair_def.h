enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors;

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors;

const int MAX_COLORPAIR_NAME_CHARS = 16;

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
