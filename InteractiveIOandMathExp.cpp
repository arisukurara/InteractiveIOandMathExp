// InteractiveIOandMathExp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    using std::cout;
    using std::cin;
    using std::to_string;

    double sugar = 1.5;
    double butter = 1;
    double flour = 2.75;
    double cookies;

    cout << "How many cookies would you like to make? ";
    cin >> cookies;
    double ratio = cookies / 48;

    double sugarAmount = sugar * ratio;
    double butterAmount = butter * ratio;
    double flourAmount = flour * ratio;


    cout << "Amount of ingredients needed: ";
    cout << "Sugar: " + to_string(sugarAmount) + " cups\n";
    cout << "Butter: " + to_string(butterAmount) + " cups\n";
    cout << "Sugar: " + to_string(flourAmount) + " cups";
}