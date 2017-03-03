
#include <iostream>
using namespace std;

int main()
{
	while(true)
	{
	char letter1, letter2;
	cout << endl;
	cout << "Please enter two letters.";
	cin >> letter1 >> letter2;


	if (letter1 > letter2)
	{
		cout << letter2 << " comes before " << letter1 << " in the alphabet";
	}
	else
	{
		cout << letter1 << " comes before " << letter2 << " in the alphabet";

	}
	}
	return 0;
}