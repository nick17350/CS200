#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int arraySize = 5;
	string name[5];
	name[0] = "Xia";
	name[1] = "Shang";
	name[2] = "Zhou";
	name[3] = "Qin";
	name[4] = "Han";

	int index = 0;
	int arraySize = 5;

	while (index < arraySize)
	{
		cout << name[index] << endl;
		index++;
	}

	return 0;
}