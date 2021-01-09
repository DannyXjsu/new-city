#include <iostream>
#include <conio.h>

#include "colored_selection.h"
#include "input_vars.h"

#include "game_character_creation.h"
#include "game_vars.h"


using namespace std;

int main() {
	while (doLoop == true) {
		cout << "NEW CITY" << endl;
		cout << "---------" << endl;
		switch (selection)
		{
		case 1:
			selection_color();
			cout << "NEW GAME" << endl;
			default_color();
			cout << "LOAD GAME" << endl;
			cout << "OPTIONS" << endl;
			cout << "EXIT" << endl;
			break;
		case 2:
			cout << "NEW GAME" << endl;
			selection_color();
			cout << "LOAD GAME" << endl;
			default_color();
			cout << "OPTIONS" << endl;
			cout << "EXIT" << endl;
			break;
		case 3:
			cout << "NEW GAME" << endl;
			cout << "LOAD GAME" << endl;
			selection_color();
			cout << "OPTIONS" << endl;
			default_color();
			cout << "EXIT" << endl;
			break;
		case 4:
			cout << "NEW GAME" << endl;
			cout << "LOAD GAME" << endl;
			cout << "OPTIONS" << endl;
			selection_color();
			cout << "EXIT" << endl;
			default_color();
			break;
		default:
			break;
		}
		input = _getch();
		if (input == KEY_ARROWUP) {
			selection--;
		}
		else if (input == KEY_ARROWDOWN) {
			selection++;
		}
		else if (input == KEY_ENTER) {
			switch (selection)
			{
			case 1:
				lastSelection = selection;
				selection = 2;
				while (doLoop == true) {
				system("cls");
					cout << "-------------------------------------------" << endl;
					cout << "|Are you sure you wanna create a new game?|" << endl;
					cout << "-------------------------------------------" << endl;
					cout << "|";
					if (selection == 1) {
						selection_color();
						cout << "        YES         ";
						default_color();
						cout << "|";
						cout << "         NO         ";
						cout << "|" << endl;
					}
					else if (selection == 2) {
						cout << "        YES         ";
						cout << "|";
						selection_color();
						cout << "         NO         ";
						default_color();
						cout << "|" << endl;
					}
					cout << "-------------------------------------------" << endl;
					input = _getch();
					switch (input)
					{
					case KEY_ARROWLEFT:
						selection--;
						break;
					case KEY_ARROWRIGHT:
						selection++;
						break;
					case KEY_ENTER:
						if (selection == 1) {
							character_creation();
						}
						else if (selection == 2) {
							doLoop = false;
						}
						break;
					default:
						break;
					}
					if (selection > 2)
					{
						selection = 1;
					}
					else if (selection < 1)
					{
						selection = 2;
					}
				}
				selection = lastSelection;
				break;
			case 2:
				cout << "Not available yet" << endl;
				system("pause");
				break;
			case 3:
				cout << "Not available yet" << endl;
				system("pause");
				break;
			case 4:
				lastSelection = selection;
				selection = 2;
				while (doLoop == true) {
					system("cls");
					cout << "---------------------------------------" << endl;
					cout << "|Are you sure you wanna quit the game?|" << endl;
					cout << "---------------------------------------" << endl;
					cout << "|";
					if (selection == 1) {
						selection_color();
						cout << "       YES        ";
						default_color();
						cout << "|";
						cout << "        NO        ";
						cout << "|" << endl;
					}
					else if (selection == 2) {
						cout << "       YES        ";
						cout << "|";
						selection_color();
						cout << "        NO        ";
						default_color();
						cout << "|" << endl;
					}
					cout << "---------------------------------------" << endl;
					input = _getch();
					switch (input)
					{
					case KEY_ARROWLEFT:
						selection--;
						break;
					case KEY_ARROWRIGHT:
						selection++;
						break;
					case KEY_ENTER:
						if (selection == 1) {
							return 1;
						}
						else if (selection == 2) {
							doLoop = false;
						}
						break;
					default:
						break;
					}
					if (selection > 2)
					{
						selection = 1;
					}
					else if (selection < 1)
					{
						selection = 2;
					}
				}
				selection = lastSelection;
				break;
			default:
				break;
			}
		}
		else {
			//cout << "Input error: '" << input << "' is unknown";
		}

		if (selection > 4) {
			selection = 1;
		}
		else if (selection < 1) {
			selection = 4;
		}
		doLoop = true;

		system("cls");
	}
	return 0;
}