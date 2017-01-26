#include <iostream>
using namespace std;

int main()
{
  while ( true )
{
    int number;//declare used variable

    cout << "Enter number between 1 and 5. ";//ask user for number
    cin >> number;//store number
    cout << endl;//empty line
    switch (number)//switch for input number
    {
        case 1://test for number 1
            cout << "I" << endl;//output if input was 1
            break;//break loop
        case 2://test for number 2
            cout << "II" <<endl;//output if input was 2
            break;//break out of loop
        case 3://test for input equal to 3
            cout << "III"<< endl;//output if input is three
            break;//break loop
        case 4://test for 4
             cout << "IV"<<endl;  //output if input is 4
            break;//break loop
        case 5://test for 5
             cout << "V"<<endl;    //output for 5
            break;//break loop
        default:// if some one put something in other than the scope of the question
            cout << "please enter a number between 1 and 5";// error message
    }
    cout <<endl;//extra line
}
}


