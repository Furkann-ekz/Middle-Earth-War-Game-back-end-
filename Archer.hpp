#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Character.hpp"

class Archer : public Character
{
	public:
		Archer(const int &al, const string &n, const int &d, const int &h, const int &a);
		void attack(Character &target);
		void armorRepair();
		void restoration();
		~Archer();
};

#endif