#include "Character.hpp"

void Character::rest()
{
	health += 5;
}

void Character::repair()
{
	armor += 10;
}

void Character::takeDamage(int d)
{
	health -= d;
}

string Character::getName()
{
	return (name);
}

int Character::getArmorLevel()
{
	return (armorLevel);
}