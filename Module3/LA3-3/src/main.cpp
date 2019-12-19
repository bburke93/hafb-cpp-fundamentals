#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1 = Distance(3, 9.7);
  d1.ShowDist();

  Distance d2(10, 8.5);
  Distance d3;
  // add two objects
  d3 = d1 + d2;
  return 0;
}