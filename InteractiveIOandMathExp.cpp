// InteractiveIOandMathExp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main()
{
    using std::cout;
    using std::cin;
    using std::to_string;
    using std::setprecision;
    using std::endl;
    using std::setw;
    using std::left;
    using std::right;
    using std::fixed;

    double principal;
    double interestRate;
    int compoundAmount;

    cout << "Principal: ";
    cin >> principal;

    cout << "Interest Rate (in percent): ";
    cin >> interestRate;
    double decimalInterestRate = interestRate / 100;

    cout << "Number of times the interest is compounded per year: ";
    cin >> compoundAmount;

    double amount = principal * pow((1 + decimalInterestRate / compoundAmount), compoundAmount);

    cout << endl;
    cout << endl;
    cout << endl;

    cout << left << setw(20) << "Interest Rate:"
        << right << setw(12) << setprecision(2) << fixed << interestRate << "%" << endl;

    cout << left << setw(20) << "Times Compounded:"
        << right << setw(13) << compoundAmount << endl;

    cout << "---------------------------------------------------" << endl;

    cout << left << setw(20) << "Principal:"
        << " $" << right << setw(11) << setprecision(2) << fixed << principal << endl;

    cout << left << setw(20) << "Interest:"
        << " $" << right << setw(11) << setprecision(2) << fixed << (amount - principal) << endl;

    cout << left << setw(20) << "Amount in Savings:"
        << " $" << right << setw(11) << setprecision(2) << fixed << amount << endl;
}
