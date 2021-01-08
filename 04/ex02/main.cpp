# include "ISquad.hpp"
# include "Squad.hpp"
# include "ISpaceMarine.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "*-------------------------------------*" << std::endl;

	Squad squad;

	for (int i = 0; i < 10; i++)
	{
		if ((rand() % 2))
			squad.push(new TacticalMarine);
		else
			squad.push(new AssaultTerminator);
	}

	for (int i = 0; i < 10; i++)
	{
		int r = (rand() % 3);
		if (r == 1)
			squad.getUnit(i)->battleCry();
		else if (r == 2)
			squad.getUnit(i)->rangedAttack();
		else
			squad.getUnit(i)->meleeAttack();
	}

	std::cout << squad.getCount() << " -> " << squad.push(nullptr) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(10 - 1)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(10)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(42)) << std::endl;
	std::cout << squad.getUnit(-1) << " " << squad.getUnit(10000) << std::endl;

	return 0;
}