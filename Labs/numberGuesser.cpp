#include <iostream>
using namespace std;
int main()
{
	int number=9;
	int guess;
	
	do
	{
		cout << endl;
		cout << "Enter your guess.";
		cin >> guess;
		cout << endl;
		if (guess > number)
		{
			cout << "to high";
		}
		else if (guess < number)
		{
			cout << "to low";
		}
		else
		{	
		cout << "you win";
		}
	} while (guess != number);
	while (true);
	return 0;
}