#include <iostream>
#include <string>

using namespace std;

class Critter
{
public:

	Critter()
	{
		cout << "A critter is bron\n";
		++CritterCount;
	}

	static void AnnounceCount()
	{
		cout << CritterCount << endl;
	}

	static int CritterCount;
};

int Critter::CritterCount = 0;

int main()
{
	Critter::AnnounceCount();
	
	Critter* crit = new Critter;
	Critter::AnnounceCount();
	delete crit;


	system("pause");
}





/*
Notes

	even tho the item is in a block sense it is stact is doesnt get destroyed
	{
		stacic Item item;
	}

	the item in block will be destoryed
	{
		Item item;
	}

*/
