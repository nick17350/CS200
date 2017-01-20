#include <iostream>
#include <string>
using namespace std;

int main()
{
	float tsbBakingSoda = 1;
	float tsbBakingPowder = .5;
	float butter = 1;
	float whiteSugar = 1.5;
	float C = 1.5;
	float egg = 1;
	float ratio;

	cout << "How many batches?";
	cin >> ratio;
	cout << ratio * tsbBakingSoda << " tsp baking soda" << endl;
	cout << ratio * tsbBakingPowder << " tsp baking powder" << endl;
	cout << ratio * butter <<" c butter" << endl;
	cout << ratio * whiteSugar << " c white sugar" << endl;
	cout << ratio * egg << " egg" << endl;
	while (true);
	return 0;
}
