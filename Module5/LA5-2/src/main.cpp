#include "csvstream.h"
#include "containers.h"
#include <iostream>
#include <string>
#include <map>
// using namespace std;

// Main Function
int main()
{
  // csvstream csvinput("../data/input.csv");  
  // // Rows have a key = column name, value = cell data
  // std::map<std::string, std::string> row;
  // // Extract the animal column
  // while(csvinput >> row)
  // {
  //   // The key is the column name
  //   std::cout << row["animal"] << std::endl;
  // }

  std::vector<Data> pet_owners;
  std::string in_file = "../data/input.csv";
  Load_Data(pet_owners, in_file);
  for(const auto& owner : pet_owners)
  {
    std::cout << owner.id << "\t" << owner.name << "\t" 
      << owner.animal << std::endl;
  }

  return 0;
}