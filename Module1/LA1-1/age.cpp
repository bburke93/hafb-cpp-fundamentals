/**
 * @file age.cpp
 * @author Brandon Burke (brandonburke93@outlook.com)
 * @brief Print user rights based on age
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Task: display rights by age:
    // 1) Under 18, you must go to school
    if(age < 18)
    {
        cout << "You should be in school" << endl;
    }
    // 2) Over 18, you can vote
    else if (age >= 18 && age < 21)
    {
        cout << "You can vote" << endl;
    }
    // 3) Over 21, you can buy alcohol
    else if (age >= 21 && age < 65)
    {
        cout << "You can buy alcohol" << endl;
    }
    // 4) Over 65, you can retire
    else 
    {
        cout << "You can retire" << endl;
    }
    return 0;
}