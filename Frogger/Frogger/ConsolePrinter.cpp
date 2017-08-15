#include "ConsolePrinter.h"

void ConsolePrinter::setColor(int num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num);
}

void ConsolePrinter::goToCoords(COORD coord) {
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, coord);
}

void ConsolePrinter::drawChar(COORD coord, char c, COLOR color)
{
	setColor(color);
	goToCoords(coord);
	cout << c;
}

void ConsolePrinter::drawString(COORD coord, string str, COLOR color)
{
	setColor(color);
	goToCoords(coord);
	cout << str;
}