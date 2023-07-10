#include <iostream>
#include <string>

//Namespace--------------------------------------------------------------------------------------

using namespace std;

//Struct--------------------------------------------------------------------------------------

struct Character
{
	Character();

	void PrintHealth();

	string Name;
	float Health;
};

Character::Character()
{
	Name = "Default Name";
	Health = 100.f;
}

void Character::PrintHealth()
{
	cout << "Health = " << Health << endl;
}

//Main--------------------------------------------------------------------------------------

int main()
{
	for (int i = 0; i < 3; i++)
	{
		Character* PtrToChar = new Character();

		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();

		delete PtrToChar;
	};






	system("pause");
}

//Declrations--------------------------------------------------------------------------------------





/*
Notes

	When we create the struct and then create a "new" character we are allocationg it to be stored in the heap. while its in the heap it will stay there until it has been delete or else it would just cause a memeory leak and crash the program.

	remember you have to deallocate the pointer at the end of its life from the heap or else it will cause a memory leak. you will not be able to acess the pointer later on even tho the address will still be taken by it.

*/
