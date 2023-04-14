#include <iostream>
#include <string>
using namespace std;
// function overriding

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);

int main() 
{
	int myInt = 1;
	string myStr = " me";

	// print here will only use the fuction that works
	Print(myInt, myStr);


	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;
}

void Print(string str1, string str2)
{
	cout << str1 << str2 << endl;
}

//being used since it meet the expression
void Print(int i, string str)
{
	cout << i << str << endl;

	cout << "interger value: " << i << endl;
	cout << "string value: " << str << endl;
}