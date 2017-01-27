#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
	float x1 = 5.00;
	float x2;

	cout << "x1 = " << x1 << endl;

	cout << endl << "Where is x2? ";
	cin >> x2;

	if (x1 - 5 <= x2 && x2 <= x1 + 5)
	{
		cout << "Within 5  x1" << endl;
	}
	else
	{
		cout << "to far away." << endl;
	}
	}
	return 0;
}
