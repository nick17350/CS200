#include <iostream>
using namespace std;

int main()
{
  while ( true )//to continue program asking for a number of feet
{
    int feet;//declare variable for user input
    int count;//declare variable determine amount of iterations

    cout <<endl;//empty line

    cout<<"how many feet do you want?";//ask user for input
    cin>>feet;//record users input

    cout<<endl;//empty line

    for  (count = ++feet * 12 ; count > 12;count--)//test whether inches have reached the desired foot
    {
        if (count%12==0)//test whether this is the last inch of the foot or a middle inch
            cout<<"|";//display 12th inch in foot
        else
            cout<<"-";//display inch
    }
    cout<<"|";//display final inch mark
}
    cout <<endl;//extra line
    return 0;//maintain open program
}


