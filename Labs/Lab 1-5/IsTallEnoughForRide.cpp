#include <iostream>
using namespace std;

int main() //yes because the condition in an if statement is evaluated to either true or false
{
	while (true)
	{
		bool isTallEnoughForRide = true;
		int feet;

		cout << "How tall are you in feet?";
		cin >> feet;

		if (feet > 3)
		{
			isTallEnoughForRide = true;
		}
		else
		{
			isTallEnoughForRide = false;
		}

		if (isTallEnoughForRide)
		{
			cout << "You are tall enough to ride the ride.";
		}
		else
		{
			cout << "you are not tall enough to ride the ride.";
		}
		cout << endl;
		
	}
	return 0;
}