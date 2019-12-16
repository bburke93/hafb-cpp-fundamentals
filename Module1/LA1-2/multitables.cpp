/**
 * @file multitables.cpp
 * @author Brandon Burke (brandonburke93@outlook.com)
 * @brief Display multiplication tables based on user input
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int kMax = 10;
int main()
{
    int count = 0;
    cout << "Enter max multiplication table to display: ";
    cin >> count;

    for(int num1 = 1; num1 <= count; ++num1)
    {
        for (int num2 = 1; num2 <= kMax; ++num2) {
            cout << setw(4) << num1 * num2;
        }
        cout << endl;
    }
    return 0;
}