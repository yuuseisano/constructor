#include <iostream>

class Player
{

public:

	std::string Name;
	int HP;
	int MP;
	int ATK;
	int DEF;
	int SPD;



	Player() 
		:Player("Default",100)
	{
	}

	Player(std::string name, int hp = 100,int mp = 0,int atk = 10,int def = 5,int spd = 5)
		:Name(name), HP(hp), MP(mp), ATK(atk), DEF(def), SPD(spd)
	{
	}

};
void Show(const Player& player) {
	std::cout << "name: " << player.Name
		<< " HP:" << player.HP
		<< " MP:" << player.MP
		<< " ATK:" << player.ATK
		<< " DEF:" << player.DEF
		<< " SPD:" << player.SPD
		<< std::endl;
}

int main()
{
	Player player1;
	Player player2("勇者", 200);

	Show(player1);
	Show(player2);
}

