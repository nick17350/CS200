#include <iostream>
using namespace std;

int main()
{
int number;//variable for user numbers
int sum = 0;//total sum of users number
char answer;// answer for continuing or not
bool isDone = false;//boolean for continue loop

while (!(isDone))//loop to determine whether user is finished
{
cout<<"Please enter a number. ";//prompt user for number
cin >> number;//record data from user
cout <<endl;//empty line
cout << "Type (Q) to quit or (A) to enter another. \nChoice.  ";//prompt user to continue or quit
cin >> answer;//record users answer to continue

if (answer == 'Q')//test to see if the user wishes to continue or quit
    isDone =true;//user has decided to quit variable isDone is set to true
else if (answer == 'q')//test to see if the user wishes to quit
    isDone = true;//user wishes to quit break loop

sum = sum + number;//total sum of the users input

}
cout <<"The sum of all your numbers is " << sum;// display total sum
return 0;//hold program open
}
