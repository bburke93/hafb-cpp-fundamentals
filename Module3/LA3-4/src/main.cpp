#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1 = Distance(1, 6);
  d1.ShowDist();

  Distance d2(3, 11);
  Distance d3;

  // add two objects
  d3 = d1 + d2;

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
  
  return 0;
}