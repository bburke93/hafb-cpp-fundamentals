#include <iostream>
using namespace std;

// Function Prototype
void FactorMod3();

// Main Function
int main()
{
  FactorMod3();
  return 0;
}

void FactorMod3()
{
  unsigned int count = 0;
  for(unsigned int num = 1; num <= 30; ++num)
  {
    if(num % 3 == 0)
    {
      count++;
    }
  }
  cout << "Result is: " << count << endl;
}