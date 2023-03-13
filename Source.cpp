#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responeToPrint);

void askYesOrNoQuestion();

int main() 
{
	// Asks user to enter y or n and returns response
	askYesOrNoQuestion();

	system("pause");
}

void welcome() 
{
	// Welcome the user to the progam
	cout << "Welcome:\n";
}

char getYesNo() 
{
	// Ask the user yes or no?
	cout << "Please answer: y or n. \n";

	char response;

	// Get user input
	cin >> response;

	return response;
}

void printResponse(char responseToPrint) 
{
	// Print response to screen
	cout << "Your answer was: " << responseToPrint << endl;
}

void askYesOrNoQuestion() 
{
	welcome();

	char answer = getYesNo();

	printResponse(answer);
}
