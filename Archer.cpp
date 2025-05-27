#include "Archer.hpp"

Archer::Archer()
{
	type = "Archer";
	name = "Name";
	damage = 10;
	health = 100;
	armor = 50;
	armorLevel = 3;
}

Archer::Archer(const int &al, const string &n, const int &d, const int &h, const int &a)
{
	type = "Archer";
	name = n;
	damage = d;
	health = h;
	armor = a;
	armorLevel = al;
}

Archer &Archer::operator=(const Archer &other)
{
	if (this != &other)
	{
		name = other.name;
		type = other.type;
		health = other.health;
		damage = other.damage;
		armor = other.armor;
		armorLevel = other.armorLevel;
	}
	return (*this);
}

Archer::Archer(const Archer &other)
{
	*this = other;
}

Archer::~Archer() {}

void Archer::attack(Character &target)
{
	int d = 0;
	switch (target.getArmorLevel())
	{
		case 1:
			d = damage;
			break;
		case 2:
			d = damage * 60;
			break;
		case 3:
			d = damage * 0.6;
			break;
		case 4:
			d = damage * 0.4;
			break;
		case 5:
			d = damage * 0.2;
			break;
	}
	target.takeDamage(d);
	cout << name << " hit the sorceress " << target.getName() << " for 50 damage." << endl;
}

void Archer::armorRepair()
{
	repair();
}

void Archer::restoration()
{
	rest();
}