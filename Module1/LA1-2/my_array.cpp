/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays
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
    float average = 0;
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << "Enter " << num + 1 << " grade: " << endl;
        cin >> grades[num];
        sum += grades[num];
        average += grades[num];
    }
    average = average/kMaxNum;
    cout << "The average of entered grades is: " << average << endl;
    average = sum/kMaxNum;
    cout << "The average of entered grades is: " << average << endl;

    // 2D Arrays: type name[row][col]
    int bi_array[3][5] = {
        {2, 4, 6, 11, 67},
        {4, 5, 22, 33, 99},
        {89, 33, 22, 11, 0}
    };

    // Print each element in the array
    for(int row = 0; row < 3; ++row)
    {
        for(int column = 0; column < 5; ++ column)
        {
            cout << "Array element at [" << row << "]" <<
                    "[" << column << "] = " << bi_array[row][column] << endl;
        }
    }    

    return 0;
}