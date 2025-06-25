#ifndef WIZZARD_HPP
#define WIZZARD_HPP

#include "Character.hpp"

class Wizard : public Character
{
	public:
		Wizard();
		Wizard(const int &al, const string &n, const int &d, const int &h, const int &a);
		Wizard &operator=(const Wizard &other);
		Wizard(const Wizard &other);
		void attack(Character &target);
		void armorRepair();
		void restoration();
		~Wizard();
};

#endif