#include <iostream>
#include <string>

//Namespace--------------------------------------------------------------------------------------

using namespace std;

//--------------------------------------------------------------------------------------

class Character
{
public:
	Character();
	~Character();

	int* CharacterAge;
	float* CharacterHealth;
};

//Main--------------------------------------------------------------------------------------

int main()
{
	Character* bob = new Character;
	delete bob;





	system("pause");
}

//--------------------------------------------------------------------------------------

Character::Character()
{
	cout << "A new character was created.\n";

	CharacterAge = new int(23);
	CharacterHealth = new float(100.f);
}

Character::~Character()
{
	cout << "Character destroyed.\n";

	delete CharacterAge;
	delete CharacterHealth;
}



/*
Notes

	When we create the struct and then create a "new" character we are allocationg it to be stored in the heap. while its in the heap it will stay there until it has been delete or else it would just cause a memeory leak and crash the program.

	remember you have to deallocate the pointer at the end of its life from the heap or else it will cause a memory leak. you will not be able to acess the pointer later on even tho the address will still be taken by it.

*/
