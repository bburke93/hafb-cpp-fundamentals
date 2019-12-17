#include <iostream>
#include "factor.h"
using namespace std;

int main()
{
    FactorMod3();
    FactorModX(3);
    FactorModX(5);
    FactorModXRange(12, 34243);
    unsigned int instances = GetFactorModXRange(4, 60);
    cout << "This is the count in main: " << instances << endl;
    auto count = GetFactorModXRange(4, 60);
    cout << "This is the auto count in main: " << count << endl;
    return 0;
}