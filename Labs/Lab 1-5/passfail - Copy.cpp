#include <iostream>
#include <string>
using namespace std;

int main()
{
	float score;
	float points;
	float percent;

	cout << "what is your assignment score? ";
	cin >> score;
	cout << "How many points are available? ";
	cin >> points;

	percent = (score / points )* 100;
	cout << "Score " << percent;

	if (percent < 70)
	{
		cout << "  fail ";
	}
	else
	{
		cout << "  pass";
	}
	return 0;
}