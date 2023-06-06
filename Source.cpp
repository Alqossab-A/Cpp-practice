//-------------------------------------------------------------------
#include <iostream>
#include <string>

//-------------------------------------------------------------------------------------------------------------------------
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------
struct Cat
{
	Cat();

	int age;
	float health;

	void Meow();
};

Cat::Cat()
{
	cout << "A new cat has been born" << endl;

	age = 3;
	health = 75;

	Meow();
}

void Cat::Meow()
{
	cout << "My age is: " << age << "." << endl;
	cout << "My health is: " << health << "." << endl;
}

//-------------------------------------------------------------------------------------------------------------------------
int main()
{
	Cat cat;

	cat.age += 5;

	cat.Meow();

	system("pause");
}


/*
Notes

Anything you wanna call outside the class has to be "public".

You can call a fucntion that has been made in a class within the constructor.

Fuctions need a return type but the constructor itself doesn't need a return type.

Qualifying a fuction or a contructor needs the scope operator "::".

Structs are like classes so they can have a constructor also.

*/
