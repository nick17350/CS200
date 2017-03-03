#include <iostream>
#include <string>
using namespace std;

int choice;			//variable for option choice
string word;		// variable to store word for translation
bool quit = true;	// variable to control quit
// Input/Output functions
void DisplayMenu();
// function to determine which word needs to be translated from hindi to english
string GetEnglish( string english )
{
	if (english == "billee")
	{
		english = "cat";
		cout << endl;
	}
	else if (english == "kutta")
	{
		english = "dog";
		cout << endl;
	}
	else if ( english == "medhak")
	{
		english = "frog";
		cout << endl;
	}
	else if (english == "khargosh")
	{
		english = "rabbit";
		cout << endl;
	}
	else
	{
		cout << "Word not in dictionary." << endl;
	}
	return (english);
}
// function to control which word is input and translate from english to hindi
string GetHindi( string hindi )
{if (hindi == "cat")
	{
		hindi =  "billee";
		cout << endl;
	}
	else if (hindi == "dog")
	{
		hindi =  "kutta";
		cout << endl;
	}
	else if (hindi == "frog")
	{
		hindi =  "medhak";
		cout << endl;
	}
	else if (hindi == "rabbit")
	{
		hindi =  "khargosh";
		cout << endl;
	}
	else
	{
		hindi =  "Word not in dictionary.";
		cout << endl;
	}
	return(hindi);
}

// Menu functions

void DisplayMenu()
{
	cout << "1. English to Hindi " << endl << "2. Hindi to English " << endl <<"3. Quit" << endl;
	return;
}
//function to display menu andanswer for word being translated from english to hindi
void EnglishToHindi() 
{
	cout << "English: ";
	cin >> word;
	cout << "Hindi: " << GetHindi(word) << endl;
	return;
}
// function to display answer for word being translated from hindi to english
void HindiToEnglish()
{	
	cout << "Hindi: ";
	cin >> word;
	cout << "English: " << GetEnglish(word) << endl;
	return;
}
// Main program
int main()
{       
	//while loop to allow user to quit
	while(quit)
	{
		//display the menu from DisplayMenu function
	DisplayMenu();
		// record option choosen 
	cin >> choice;
		//determine which option is choosen
		if (choice == 1)
		{	//use function EnglishToHindi which displays menu for input and formatting for output
			EnglishToHindi();
		}
		else if (choice == 2)
		{	//use function HindiToEnglish which displays menu for input and formatting for output
			HindiToEnglish();
		}
		else if( choice == 3 )
		{	//quit the program 
			quit = false;
		}
	}
    return 0;
}