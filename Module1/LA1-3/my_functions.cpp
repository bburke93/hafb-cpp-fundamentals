#include <iostream>
#include <array>
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

/**
 * @brief Return the higher of two given integers
 * 
 * @param num1: First value 
 * @param num2: Second value
 * @return int: The higher of the two values
 */
int Max(int num1, int num2)
{
  if (num1 > num2)
  {
    return num1;
  }
  else
  {
    return num2;
  }
  
}

int Max3(int num1, int num2, int num3)
{
  // num1 greatest
  if((num1 > num2) && (num1 > num3))
  {
    return num1;
  }
  // num2 greatest
  else if((num2 > num1) && (num2 > num3))
  {
    return num2;
  }
  else //num3 greatest
  {
    return num3;
  }
}

int Max10(std::array<int, 10> nums)
{
  int max = 0;
  for(auto num : nums)
  {
    if (max <= num)
    {
      max = num;
    }
  }
  return max;
}