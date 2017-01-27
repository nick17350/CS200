#include <iostream>
#include <string>
using namespace std;
int main()						//age is a local variable for main
{								//ticket price is also a local variable only usable within main
	int age;
	float ticketPrice;

	cout << "Age? ";
	cin >> age;

	if (age < 13)
	{
		ticketPrice = 5.00;
	}
	else
	{
		ticketPrice = 7.00;
	}

	cout << "Ticket price: " << ticketPrice << endl;

	while (true) {}

	return0;
}