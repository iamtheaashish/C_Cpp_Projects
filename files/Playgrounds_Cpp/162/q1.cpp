#include <iostream>

namespace Monster
{
	enum MonsterType
	{
		orc,
		goblin,
		troll,
		ogre,
		skeleton,
	};
}
int main()
{
	[[maybe_unused]] Monster::MonsterType aashish{ Monster::troll };

	if(aashish == Monster::troll)
		std::cout << "Abbe sukhee paise kma aur gym jaa aur diet le!" << '\n';

	return 0;
}
