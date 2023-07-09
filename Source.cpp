#include <iostream>
#include <string>

//Namespace--------------------------------------------------------------------------------------

using namespace std;

//Classes--------------------------------------------------------------------------------------

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();
	
	void TakeDamage(float dmg);

private:
	float Health;
	string Name;

protected:
	int NumberOfLimbs;

};

class Goblin : public Creature
{
public:
	Goblin();

	int GetNumberOfLimbs();
};

//Main--------------------------------------------------------------------------------------

int main()
{
	/*Creature Igor;
	Igor.SetName("Igor");
	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	cout << "Igor will now take 35 dmg" << endl;
	Igor.TakeDamage(35.f);*/

	Goblin Gobby;
	cout << "Name: " << Gobby.GetName() << endl;
	cout << "Health: " << Gobby.GetHealth() << endl;
	cout << "Number Of Limbs: " << Gobby.GetNumberOfLimbs() << endl;
	cout << "Gobby will now take 35 dmg" << endl;
	Gobby.TakeDamage(35.f);




	system("pause");
}

//Declrations--------------------------------------------------------------------------------------

Creature::Creature()
{
	Health = 100.f;
	cout << "A creature has been created!\n";
}

void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float dmg)
{
	float Total;
	Total = Health - dmg;

	if (Total <= 0.f)
	{
		cout << GetName() << " is dead\n";
	}
	else
	{
		Health -= dmg;
	}

	cout << "Health: " << Health << endl;
}

Goblin::Goblin()
{
	NumberOfLimbs = 5;

	SetName("Gobby");
}

int Goblin::GetNumberOfLimbs()
{
	return NumberOfLimbs;
}

/*
Notes

	Creating a getter and setter to use as an access method to a private varible is called encapsulation.

	when you qualify the setname fucntion to the creature class you are in the creature class thus Name = name is possible.(you are in scope)

	Goblin class is able to access NumberOfLimbs because its a child of Creature which allows it to access all public and protected varibles.


*/
