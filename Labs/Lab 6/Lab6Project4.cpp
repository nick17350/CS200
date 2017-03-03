#include <iostream>
using namespace std;

int main()
{
	float startingWage, percentRaisePerYear, adjustedWage;
	int yearsWorked;

	cout << "What is your starting wage? ";
	cin >> startingWage;
	cout << "What percentage of  a raise do you get per year? %";
	cin >> percentRaisePerYear;
	percentRaisePerYear /= 100;

	cout << "How many years have you worked? ";
	cin >> yearsWorked;

	adjustedWage = startingWage; 

	for (int i = 0; i < yearsWorked; i++)
	{
		adjustedWage += adjustedWage * percentRaisePerYear;
	}
	cout << "Your new wage is  " << adjustedWage;

	while (true);
	return 0;
}