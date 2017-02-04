#include <iostream>
#include <string>
#include <cmath> // needed for square root
using namespace std;

float GetDistance( int x1, int y1, int x2, int y2)
{
	float xFinal = (x2-x1) * (x2-x1) ; //could not get the pow(x,y) function
	float yFinal = (y2-y1) * (y2-y1) ;
	float distance =sqrt (xFinal + yFinal) ;
	
    return distance;
}
int main()
{   
	
    while ( true )
    {
        float x1, y1, x2, y2;

        cout << "First coordinate pair, enter x and y: ";
        cin >> x1 >> y1;

        cout << "Second coordinate pair, enter x and y: ";
        cin >> x2 >> y2;

        float distance = GetDistance( x1, y1, x2, y2 );
        cout << "Distance: " << distance << endl;

        cout << endl << endl;
    }

    return 0;
}