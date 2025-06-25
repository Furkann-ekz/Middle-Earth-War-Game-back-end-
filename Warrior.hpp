#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior : public Character
{
	public:
		Warrior();
		Warrior(const int &al, const string &n, const int &d, const int &h, const int &a);
		Warrior &operator=(const Warrior &other);
		Warrior(const Warrior &other);
		void attack(Character &target);
		void armorRepair();
		void restoration();
		~Warrior();
};

#endif