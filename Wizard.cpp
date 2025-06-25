#include "Wizard.hpp"

Wizard::Wizard()
{
	type = "Wizard";
	name = "Name";
	damage = 10;
	health = 100;
	armor = 50;
	armorLevel = 3;
}

Wizard::Wizard(const int &al, const string &n, const int &d, const int &h, const int &a)
{
	type = "Wizard";
	name = n;
	damage = d;
	health = h;
	armor = a;
	armorLevel = al;
}

Wizard &Wizard::operator=(const Wizard &other)
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

Wizard::Wizard(const Wizard &other)
{
	*this = other;
}

Wizard::~Wizard() {}

void Wizard::attack(Enemy &target)
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

void Wizard::armorRepair()
{
	repair();
}

void Wizard::restoration()
{
	rest();
}