#include <iostream>
using namespace std;

int main()
{
    float price;
    float priceTax;
    float tax;
    string city;

    cout << "What is the price of your items? ";//•Ask the user for the price of their item. Store this in a float.
    cin >> price;
    cout << endl;
    cout << "What city are you in? ";//•Ask the user what city they're in. Store this in a string.
    cin >> city;
    cout << endl;


    switch("city")
    {
        case "Olathe"://Olathe 6.5
        case "olathe":
            tax = 6.5;
            break;
        case "OverlandPark"://OverlandPark 9.35
        case "overlandpark":
        case "Overlandpark":
            tax = 9.35;
            break;
        case "Raytown": //Raytown 8.225
        case "raytown":
            tax = 8.225;
            break;
        case "Independence"://Independence 7.725
        case "independence":
            tax = 7.725;
            break;
        default: //◦If they are in none of the cities listed in the table, default the tax to %8.00.
            tax = 8.00;
    }

    priceTax = price + (price * tax);//•Create a new variable to store price plus tax. ◦The calculation for this is total = price + ( price * tax ).


    cout << "Total price of item is " << priceTax;//•After the calculation is done, display the final price to the user.

    return 0;
}
