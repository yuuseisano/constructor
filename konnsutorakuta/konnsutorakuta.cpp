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

	Player(const Player& other) 
		:Name(other.Name), HP(other.HP), MP(other.MP), ATK(other.ATK), DEF(other.DEF), SPD(other.SPD)
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
	Player player2("勇者", 200,0,10,5,1);

	Show(player1);
	Show(player2);
}

