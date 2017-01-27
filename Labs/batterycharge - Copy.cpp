#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		float charge;

		cout << "what is the charge on your phone? %";
		cin >> charge;
		if (charge >= 75)
		{
			cout << "[****}";
		}
		else if (charge >= 50)
		{
			cout << "[*** }";
		}
		else if (charge >= 25)
		{
			cout << "[**  }";
		}
		else if (charge <= 25)
		{
			cout << "[*   }";
		}
		cout << endl;
	}
	return 0;
}