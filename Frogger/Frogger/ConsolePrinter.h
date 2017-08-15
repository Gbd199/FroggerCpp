#ifndef C_CONSOLEPRINTER
#define C_CONSOLEPRINTER


#include <iostream>
#include <string>
#include <Windows.h>

enum COLOR {
	DARK_GREEN_ON_BLACK = 2,
	GRAY_ON_BLACK		= 7,
	GREEN_ON_BLACK		= 10,
	BLACK_ON_BLUE		= 16,
	BLACK_ON_GREEN		= 32,
	GREEN_ON_RED		= 66,
	GREEN_ON_BLUE		= 146	
};

using namespace std;

class ConsolePrinter{
private:
	ConsolePrinter() {}

public:
	static void setColor(int num);
	static void goToCoords(COORD coord);
	static void drawRect(COORD coord, int width, int height, COLOR color = GRAY_ON_BLACK);
	static void drawChar(COORD coord, char c, COLOR color = GRAY_ON_BLACK);
	static void drawString(COORD coord, string str, COLOR color = GRAY_ON_BLACK);
};

#endif //C_CONSOLEPRINTER