/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays and C++ array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

const int kMaxNum = 5;
int main() 
{
    // C-Style
    // Array notation: type name[elements];
    int grades[kMaxNum];  // an array of 5 integers
    int sum = 0;
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << "Enter " << num + 1 << " grade: " << endl;
        cin >> grades[num];
        sum += grades[num];
    }
    float average = sum/kMaxNum;
    cout << "The average of entered grades is: " << average;
    return 0;
}