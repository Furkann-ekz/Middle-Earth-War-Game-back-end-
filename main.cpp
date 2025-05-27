#include "Archer.hpp"
#include "Warrior.hpp"
#include "Wizard.hpp"

int main()
{
	Archer *Atom = new Archer(3, "Atom", 15, 70, 50);
	Archer *Dany = new Archer(4, "Dany", 12, 100, 70);

	Atom->attack(*Dany);
}