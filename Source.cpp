#include <iostream>
#include <string>
//using namespace std;



int main()
{
	std::string myString;
	myString = "My dogs name is: ";

	std::string first = "spot ";
	std::string last = "jows";

	myString += (first + last);
	

	std::cout << myString << std::endl;


	system("pause");
}
