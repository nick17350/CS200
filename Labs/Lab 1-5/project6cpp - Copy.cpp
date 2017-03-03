#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		float number1;
		float number2;
		float answer;
		string operent;
		int choice;
		cout << endl;
		cout << "please enter two numbers? ";
		cin >> number1 >> number2;
		cout << endl;
		cout << "What kind of operation? (1) Add, (2) Subtract, (3) Multiply, (4) Divide" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			answer = number1 + number2;
			operent = "+";
			break;
		case 2:
			answer = number1 - number2;
			operent = "-";
			break;
		case 3:
			answer = number1 * number2;
			operent = "*";
			break;
		case 4:
			answer = number1 / number2;
			operent = "/";
			break;
		default:
			cout << "invalid input";

		}
		cout << number1 << " " << operent << " " << number2 << " is " << answer;
	}
	return 0;
}
