//-------------------------------------------------------------------
#include <iostream>
#include <string>

//-------------------------------------------------------------------------------------------------------------------------
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------
struct Container
{
	string Name;

	int X;
	int Y;
	int Z;
};

//-------------------------------------------------------------------------------------------------------------------------
int main()
{
	Container container = { "Sam", 5, 6, 7 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl;

	cout << PtrToCont->Name << endl;

	system("pause");
}

/*
Notes

	cout << (*PtrToCont).Name << endl;

Order of operation always starts with () so the order will look like. 1 derefrance 2 dot notation. 

If there were no () then you would be acessing the .Name before the pointer has been derefanced.

	cout << PtrToCont->Name << endl;

sytax sugar is the -> for pointers rather then (*).

	int arr[] = {1, 2, 3};

	int* ArrPtr = arr;

	cout << *ArrPtr << end; // returns 1

	ArrPtr++

	cout << *ArrPtr << end; // returns 2

For arrays when you have a pointer, and you use the ++ operator it moves to the next element in the array.
*/
