#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1 = Distance(1, 6);
  Distance d2(3, 11);
  d1.ShowDist();
  // add two objects
  Distance d3 = d1 + d2;

  // Display info with std::cout
  std::cout << d3 << std::endl;

  // subtract two objects
  Distance d4 = d2 - d1;
  std::cout << d4 << std::endl;

  if(d1 < d2)
  {
    std::cout << d1 << " is less than " 
      << d2 << std::endl;
  }

  // Check == operator
  d1.update_distance(1,5);
  d2.update_distance(1,5);

  if(d1 == d2)
  {
    std::cout << d1 << " is equal to "
      << d2 << std::endl;
  }

  d2.update_distance(3,0);
  d2 = d1;
  std::cout << d2 << " and " << d1 << std::endl;
  // Initialization IS NOT assignment
  Distance d5 = d2;
  std::cout << d5 << " and " << d2 << std::endl;
  Distance d6(d2);
  std::cout << d6 << " and " << d2 << std::endl;
  
  return 0;
}