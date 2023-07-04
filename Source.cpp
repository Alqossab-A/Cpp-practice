#include <iostream>
#include <string>

//--------------------------------------------------------------------------------------

using namespace std;

//--------------------------------------------------------------------------------------

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

class Corgi : public Dog
{
public:
	Corgi(string name, int age, int numberOfLimbs);
};

//--------------------------------------------------------------------------------------

int main()
{
	Corgi corgi("mark", 7, 3);

	corgi.Speak();

	system("pause");
}

//--------------------------------------------------------------------------------------

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

Dog::Dog(string name, int age, int numberOfLimbs) : Animal(name, age, numberOfLimbs)
{
	
}

void Dog::Speak()
{
	cout << "little woof\n" << endl;
}

Corgi::Corgi(string name, int age, int numberOfLlimbs) : Dog(name, age, numberOfLlimbs)
{
	cout << "Corgi is born" << endl;
}


/*
Notes

	on line 72 adding : and then the second animal constructor we are telling it to only call the second one and not the first constructor.

	Animal > Dog > corgi

	Dog::Dog()
{
	cout << "Calling default Dog Constructor" << endl;
}

Dog::Dog(string name, int age, int limbs)
{
	cout << "Calling 3 argument Dog constructor" << endl;
}

line 92 give it some more thought to understand it. using the corgi constructor with 3 parameters then calling the dog constructor with 3 paramets send up calling the animal constructor with 3 parameters which will report what the corgies 3 params are. kinda neet

*/
