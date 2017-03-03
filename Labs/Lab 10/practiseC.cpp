#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3, itemCount = 0;
	
	while (itemCount < arraySize)
	{
		cout << "Enter item name: " << endl;
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		itemCount++;
	}
	int counter = 0;
	while (counter < itemCount)
	{
		cout << endl << items[counter] << " is $" << prices[counter];
		counter++;
	}
	return 0;
}