//-------------------------------------------------------------------
#include <iostream>
#include <string>

//-------------------------------------------------------------------------------------------------------------------------
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------
class Dog
{
public:

	Dog();

	string Name;
	int Age;
	float Health;

	void Bark();
};

//-------------------------------------------------------------------------------------------------------------------------
int main()
{
	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	dog.Name = "sam";
	dog.Age = 14;
	dog.Health = 43.5;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	system("pause");
}

Dog::Dog()
{
	Bark();

	Name = "Default Name";
	Age = 10;
	Health = 100.f;
}

void Dog::Bark()
{
	cout << "WOOF!" << endl;
}

/*
Notes

Anything you wanna call outside the class has to be "public".

You can call a fucntion that has been made in a class within the constructor.

Fuctions need a return type but the constructor itself doesn't need a return type.

Qualifying a fuction or a contructor needs the scope operator "::".

*/
