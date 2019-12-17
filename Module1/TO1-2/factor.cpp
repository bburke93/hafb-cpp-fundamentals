#include <iostream>
#include "factor.h"
using namespace std;

/**
 * @brief Calculate the number of instances divisible
 * by 3 in the range 1 through 30
 * 
 */
void FactorMod3()
{
  FactorModX(3);
}

/**
 * @brief Calculate the number of instances divisible
 * by input parameter in the range 1 through 30
 * 
 * @param mod_number: the divisible number
 */
void FactorModX(int mod_number)
{
  FactorModXRange(mod_number, 30);
}

/**
 * @brief Calculate the number of instances divisible
 * by input mod_number in the range 1 through input max_range
 * 
 * @param mod_number: the divisible number
 * @param max_range: the max range to check for instances
 */
void FactorModXRange(int mod_number, int max_range)
{
  unsigned int count = GetFactorModXRange(mod_number, max_range);
  cout << "Result is: " << count << endl;
}

/**
 * @brief Get the count of instances divisible
 * by input mod_number in the range 1 through input max_range
 * 
 * @param mod_number: the divisible number
 * @param max_range : the max range to check for instances
 * @return unsigned int: number of instances 
 */
unsigned int GetFactorModXRange(int mod_number, int max_range)
{
  unsigned int count = 0;
    for(unsigned int num = 1; num <= max_range; ++num)
    {
      if(num % mod_number == 0)
      {
        count++;
      }
    }
    return count;
}