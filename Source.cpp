//-------------------------------------------------------------------
#include <iostream>
#include <string>

//-------------------------------------------------------------------------------------------------------------------------
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------
struct LocationVector
{
	float X;
	float Y;
	float Z;
};

//-------------------------------------------------------------------------------------------------------------------------
struct Player {
	int Level;
	float Health;
	float Damage;
	float Stamina;

	LocationVector Location = { 0.f, 0.f, 0.f };

	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}

	int GetLevel()
	{
		return Level;
	}

	void DisplayLocation()
	{
		cout << "Location (" << Location.X << ", " << Location.Y << ", " << Location.Z << ")" << endl;
	}
};

//-------------------------------------------------------------------------------------------------------------------------
int main()
{
	Player p_1;
	p_1.Level = 1;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 Level = " << p_1.GetLevel() << endl;

	p_1.TakeDamage(40.f);

	cout << "p_1 has taken " << 40.f << " damage!" << endl;
	cout << "p_1 Health = " << p_1.Health << endl;

	p_1.DisplayLocation();

	system("pause");
}
