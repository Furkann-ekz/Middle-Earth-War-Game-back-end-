#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "iostream"

using std::string;
using std::endl;
using std::cout;

class Character
{
	protected:
		string type;
		string name;
		int damage;
		int health;
		int armor;
		int armorLevel;

	public:
		virtual void attack(Character &target) = 0;
		virtual void armorRepair() = 0;
		virtual void restoration() = 0;
		virtual ~Character() {};

		int getArmorLevel();
		void repair();
		void rest();
		string getName();

		void takeDamage(int d);
};

#endif