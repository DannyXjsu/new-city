#include <iostream>
#include "game_character_creation.h"
#include "game.h"
int character_creation() {
	std::string input;
	while (true) {
		system("cls");
		std::cout << "CHARACTER CREATION" << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << "Name: ";
		std::cin >> input;
		Character player(input, 0, 0);
		std::cout << "GAME: Character " << player.getName() << " was created with the level of " << player.getLevel() << " and xp of " << player.getXp() << std::endl;
		system("pause");
		game(player.getName(), player.getLevel(), player.getXp());
		break;
	}
	return 0;
}