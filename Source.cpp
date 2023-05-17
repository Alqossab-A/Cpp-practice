#include <iostream>
#include <string>
using namespace std;



int main()
{
	string myString;
	myString = "My dogs name is: ";

	string first = "spot ";
	string last = "jows";

	myString += (first + last);
	

	cout << myString << endl;


	system("pause");
}
