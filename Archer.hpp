#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Character.hpp"

class Archer : public Character
{
	public:
		Archer();
		Archer(const int &al, const string &n, const int &d, const int &h, const int &a);
		Archer &operator=(const Archer &other);
		Archer(const Archer &other);
		void attack(Character &target);
		void armorRepair();
		void restoration();
		~Archer();
};

#endif