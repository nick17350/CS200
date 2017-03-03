#include <iostream>
#include <string>
using namespace std;

float CountChange(int quarters, int dimes, int nickels,int pennies)
{
    float money = ( quarters * .25) + ( dimes * .10) + ( nickels * .05) + ( pennies * .01);
    return money;
}


int main()
{   
    while ( true )
    {
        int quarters, dimes, nickels, pennies;

        cout << "How many quarters? ";
        cin >> quarters;

        cout << "How many dimes? ";
        cin >> dimes;

        cout << "How many nickels? ";
        cin >> nickels;

        cout << "How many pennies? ";
        cin >> pennies;

        float money = CountChange( quarters, dimes, nickels, pennies ); 
        cout << "Money: $" << money << endl;

        cout << endl << endl;
	}
	while(true);
	return 0;
}