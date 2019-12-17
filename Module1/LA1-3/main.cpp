#include <iostream>
#include "my_functions.h"
using namespace std;

int main()
{
  int number1 = 5, number2 = 10;
  cout << "The sum of " << number1 << " and " << number2
  << " is: " << Sum(number1, number2) << endl;;

  int step = 3;
  cout << "Value before UpdateStep(): " << step << endl;
  UpdateStep(step);
  UpdateStep(step);
  UpdateStep(step);
  cout << "Value after UpdateStep(): " << step << endl;
  return 0;
}
