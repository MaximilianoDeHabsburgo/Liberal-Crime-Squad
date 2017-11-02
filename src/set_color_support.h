#pragma once
struct ColorSetup {
	short letter;
	short background;
	bool bright;
	bool blink;
//	ColorSetup(int first_, int second_) : {first(first_), second(second_), bright(false), blink(false)};
};
extern const ColorSetup 	BLACK_ON_BLACK ;
extern const ColorSetup BLACK_ON_BLACK_BRIGHT ;
extern const ColorSetup BLACK_ON_WHITE ;
extern const ColorSetup BLUE_ON_BLACK_BRIGHT ;
extern const ColorSetup CYAN_ON_BLACK ;
extern const ColorSetup CYAN_ON_BLACK_BRIGHT ;
extern const ColorSetup GREEN_ON_BLACK ;
extern const ColorSetup GREEN_ON_BLACK_BRIGHT ;
extern const ColorSetup MAGENTA_ON_BLACK ;
extern const ColorSetup MAGENTA_ON_BLACK_BRIGHT ;
extern const ColorSetup RED_ON_BLACK ;
extern const ColorSetup RED_ON_BLACK_BRIGHT ;
extern const ColorSetup RED_ON_BLUE_BRIGHT ;
extern const ColorSetup RED_ON_GREEN_BRIGHT ;
extern const ColorSetup RED_ON_RED  ;
extern const ColorSetup WHITE_ON_BLACK ;
extern const ColorSetup WHITE_ON_BLACK_BRIGHT ;
extern const ColorSetup WHITE_ON_RED_BRIGHT ;
extern const ColorSetup WHITE_ON_WHITE ;
extern const ColorSetup WHITE_ON_WHITE_BRIGHT ;
extern const ColorSetup YELLOW_ON_BLACK ;
extern const ColorSetup YELLOW_ON_BLACK_BRIGHT ;
extern const ColorSetup YELLOW_ON_RED ;
extern const ColorSetup YELLOW_ON_RED_BRIGHT ;
extern const ColorSetup YELLOW_ON_RED_BRIGHT_BLINK ;
void set_color_easy(ColorSetup color);