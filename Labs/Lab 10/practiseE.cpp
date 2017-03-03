#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3, 
	
	for (itemCount = 0; itemCount < arraySize; itemCount++)
	{
		cout << "Enter item name: " << endl;
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
	}
	
	for (counter = 0; Counter < itemCount; counter++)
	{
		cout << endl << items[counter] << " is $" << prices[counter];
	}
	return 0;
}