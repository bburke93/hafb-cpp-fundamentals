#include <iostream>
using namespace std;

/**
 * @brief Sums the two parameters
 * 
 * @param num1: First number 
 * @param num2: Second number
 * @return int: Sum of num1 and num2
 */
int Sum(int num1, int num2) // Pass both parameters by value (make your own copy)
{
  int total = 0;
  for (int control = 1; control <= num1; ++control)
  {
    ++total;
  }
  for (int control = 1; control <= num2; ++control)
  {
    ++total;
  }
  return total;
}

/**
 * @brief Increments the value of step by 1
 * 
 * @param step: current step value 
 */
void UpdateStep(int& step) // Take the address of the parameter
{
    cout << "Current step: " << step << endl;
    ++step;
    cout << "New step: " << step << endl;
}