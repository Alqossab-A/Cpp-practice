#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responeToPrint);

int main() {
	welcome();

	char answer = getYesNo();

	printResponse(answer);

	system("pause");
}

void welcome() {
	cout << "Welcome:\n";
}

char getYesNo() {
	cout << "Please answer: y or n. \n";

	char response;

	cin >> response;

	return response;
}

void printResponse(char responseToPrint) {
	cout << "Your answer was: " << responseToPrint << endl;
}
