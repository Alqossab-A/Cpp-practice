//-------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(string name, int age, int numberOfLimbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

int main()
{
	Animal animal;

	animal.Report();

	Animal animal_2("Chetto", 7, 5);

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is born\n";

	Name = "Default";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int numberOfLimbs)
	:Name(name), 
	Age(age), 
	NumberOfLimbs(numberOfLimbs)
{
	Report();
}

void Animal::Report()
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
}


/*
Notes



*/
