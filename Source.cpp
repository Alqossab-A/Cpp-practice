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

class Dog : public Animal
{
public:
	Dog();
	Dog(string name, int age, int numberOfLimbs);

	void Speak();
};

int main()
{
	Dog dog("spot", 4, 5);

	dog.Speak();

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
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A dog is born" << endl;
}

Dog::Dog(string name, int age, int numberOfLimbs)
{
	Animal(name, age, numberOfLimbs);
}

void Dog::Speak()
{
	cout << "little woof" << endl;
}


/*
Notes

	To explain the code her the dog will call the animal constructor by default and print out an animal is born then since we have 3 parameters in the dog contructor and we call Animal with the 3 paramters it will print out a report of spot with a little woof

*/
