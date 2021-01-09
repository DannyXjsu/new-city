#pragma once

class Character
{
private:
	std::string name;
	int level;
	int xp;
public:
	Character(std::string aName, int aLevel, int aXp) {
		name = aName;
		level = aLevel;
		xp = aXp;
	}

	void setName(std::string aName) {
		name = aName;
	}
	void setLevel(int aLevel) {
		level = aLevel;
	}
	void setXp(int aXp) {
		aXp = aXp;
	}

	std::string getName() {
		return name;
	}
	int getLevel() {
		return level;
	}
	int getXp() {
		return xp;
	}
};

int character_creation();