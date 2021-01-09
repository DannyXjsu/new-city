#include <iostream>
#include <conio.h>

#include "game.h"
#include "game_context_menu.h"
#include "game_identities.h"

int gSelection = 1;
int gInput;
int gLastSelection;

#define KEY_ARROWUP 72
#define KEY_ARROWDOWN 80
#define KEY_ARROWLEFT 75
#define KEY_ARROWRIGHT 77
#define KEY_ENTER 13

#include <Windows.h>

// Some crazy shit i copied from the internet, i think what it does is just defines hStdOut as some windows.h function thing so we can later use it for the SetConsoleTextAttribute thing
HANDLE gHStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

// Just a simpler way to write that i want my text to be black and background white
void gSelection_color() {
	SetConsoleTextAttribute(gHStdOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED); // I think how this works i's; it sets the text attribute for hStdOut, which i think it's the console we have open, to have the background color both red, green and blue, which all of them combine is white, since i didn't set anything for the foreground, it will be black
}

// Just a simpler way to write that i want my text to be white and background black
void gDefault_color() {
	SetConsoleTextAttribute(gHStdOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);  // I think how this works i's; it sets the text attribute for hStdOut, which i think it's the console we have open, to have the foregroud color (aka as the text color) both red, green and blue, which all of them combine is white, since i didn't set anything for the background, it will be black
}



int game(std::string playerName, int playerLevel, int playerXp) {
	while (true) {
		system("cls");
		createContextMenu(C0000());
		std::cout << "Name: " << playerName << " | Level: " << playerLevel << " | XP: " << playerXp << std::endl;
		drawLine(120);
		gSelection_color();
		std::cout << "CONTINUE" << std::endl;
		gDefault_color();
		gInput = _getch();
		if (gInput == KEY_ENTER) {

		}
		else {
		}
	}
	return 0;
}
