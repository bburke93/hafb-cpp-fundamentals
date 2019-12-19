#include <iostream>
#include "containers.h"
using namespace std;

// Main Function
int main()
{
  std::string input = "../data/sample_data.csv";
  std::vector<Data> information;
  Load_Data(information, input);

  cout <<"Information size: " << information.size() << endl;

  return 0;
}