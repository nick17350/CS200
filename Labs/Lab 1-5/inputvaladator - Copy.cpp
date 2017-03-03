#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "What is your favorite fruit?" << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Pear" << endl;
	cout << "4. Strawberry" << endl;
	cout << "make a numeric choice :";
	cin >> choice;
	cout << endl;
		if (choice < 1 || choice >4)
		{
			cout << "invalid entry"; 
		}
		else
		{
			cout << "Good Choice";
		}

		return 0;

}
