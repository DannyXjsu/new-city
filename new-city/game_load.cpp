#include "game_load.h"
//#include "colored_selection.h"

#include <Windows.h>

// Some crazy shit i copied from the internet, i think what it does is just defines hStdOut as some windows.h function thing so we can later use it for the SetConsoleTextAttribute thing
HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);

// Just a simpler way to write that i want my text to be black and background white
void selection_color2() {
	SetConsoleTextAttribute(hStdOut2, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED); // I think how this works i's; it sets the text attribute for hStdOut, which i think it's the console we have open, to have the background color both red, green and blue, which all of them combine is white, since i didn't set anything for the foreground, it will be black
}

// Just a simpler way to write that i want my text to be white and background black
void default_color2() {
	SetConsoleTextAttribute(hStdOut2, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);  // I think how this works i's; it sets the text attribute for hStdOut, which i think it's the console we have open, to have the foregroud color (aka as the text color) both red, green and blue, which all of them combine is white, since i didn't set anything for the background, it will be black
}


int game_load() {

	return 0;
}