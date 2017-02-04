#include <iostream>
using namespace std;

float PercentToDecimal( float percent )
{
    float decimal = percent / 100;
    return decimal;
}

int main()
{
    float a, b, c;

    a = PercentToDecimal( 50 );
    b = PercentToDecimal( 12.5 );
    c = PercentToDecimal( 99.99 );

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
	while(true);
    return 0;
	
}