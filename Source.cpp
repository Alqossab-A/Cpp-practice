#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus {
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

int main()
{
	PlayerStatus status;
	status = PS_Crouched;

	if (status == PS_Crouched) {
		cout << "The player is crouching! \n";
	}

	status = PS_Running;

	if (status == PS_Crouched) {
		cout << "The player is crouching! \n";
	}

	system("pause");
}
