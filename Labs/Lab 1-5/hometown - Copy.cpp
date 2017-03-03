#include <iostream>
#include <string>
using namespace std;

int main()
{
	
		string town;
		string name;

		cout << "What is your home town? ";
		cin >> town;
		if (town.size() > 6)
		{
			cout << "thats a long name. ";
		}
		cout << "What is your name? ";
		cin >> name;

		cout << "Hello " << name << " from " << town;
	while (true)
	return 0;
	
}
