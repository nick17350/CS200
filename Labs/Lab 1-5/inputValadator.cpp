#include <iostream>
using namespace std;

int main()
{
	int choice;
	cout << "Please enter a number between 0 and 5. ";
	cin >> choice;
	while (choice > 5 || choice < 0)
	{
		cout << "invalid input.try again";
		cin >> choice;
	}

	cout << "thank you" << endl;

	return 0;
}