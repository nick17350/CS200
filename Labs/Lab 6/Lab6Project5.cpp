#include <iostream>
using namespace std;

int main()
{
	float sum = 0;

	for (int i = 0; i <= 10; i++)
	{

		sum += i;

		if (i < 10)
		{
			cout << i << " + ";
		}
		else
		{
			cout << i;
		}

	}

	cout << endl << "Sum = " << sum;

	while (true);
	return 0;

}