#include <iostream>

struct PlayerSettings
{
	std::string Name;
	int HP;
	int MP;
	int ATK;
	int DEF;
	int SPD;
};

PlayerSettings hero = { "勇者", 1000,100,100,50,10 };

class Player
{

public:

	PlayerSettings Settings;



	Player(const Player& other) 
		:Settings(other.Settings)
	{
	}
	Player(std::string name, const PlayerSettings& settings)
		: Settings(settings)
	{
	}

};
void Show(const Player& player) {
	std::cout << "name: " << player.Settings.Name
		<< " HP:" << player.Settings.HP
		<< " MP:" << player.Settings.MP
		<< " ATK:" << player.Settings.ATK
		<< " DEF:" << player.Settings.DEF
		<< " SPD:" << player.Settings.SPD
		<< std::endl;
}

int main()
		{

	Player player("勇者", hero);

	Show(player);
}
