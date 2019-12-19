#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1 = Distance(1, 6);
  d1.ShowDist();

  Distance d2(0, 12);
  Distance d3;

  // add two objects
  d3 = d1 + d2;

  // Display info with std::cout
  std::cout << d3 << std::endl;

  // subtract two objects
  Distance d4 = d1 - d2;
  std::cout << d4 << std::endl;
  
  return 0;
}