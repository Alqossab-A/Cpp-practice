#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);

int main() 
{
	string myStr = "Druid";

	ChangeStr(myStr);

	cout << myStr << endl;


	system("pause");
}

void ChangeStr(string& str)
{
	str += "!";
}
