// S108-ResturantBill-Zaman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tabNum, mealNum, taxNum, tipNum, totalNum;
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Enter table number: ";
    cin >> tabNum;
    cout << "Enter meal charge: ";
    cin >> mealNum;
    cout << "Meal: " << mealNum << endl;
    taxNum = mealNum * 0.0675;
    cout << "Taxes: " << taxNum << endl;
    tipNum = (taxNum + mealNum) * 0.20;
    cout << "Tip: " << tipNum << endl;
    totalNum = (tipNum + mealNum + taxNum);
    cout << "Total: " << totalNum << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
