#include <array>
#include <iostream>
#include <string>
#include <fstream>

const int kMaxSize = 24;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create an ojbect of type ifstream
  std::ifstream in;   // input file stream

  // open the file age.txt
  in.open("../age.txt");  // relative path from the executable
  if(in.fail())
  {
    std::cout << "Unable to open file age.txt.\nShutting down\n";
    return 1;
  }

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1);  // initialize elements to -1
  int age_size = 0;

  // read to the end of the file
  while(age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the values in the array
  for(auto age : ages)
  {
    std::cout << age << std::endl;
  }
  in.close();   // close the input file

  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  std::ifstream inNames;
  inNames.open("../name.txt");
  if(inNames.fail())
  {
    std::cout << "Unable to open file name.txt.\nShutting down\n";
    return 1;
  }

  // read one name, store it in the array, and print it
  std::array<std::string, kMaxSize> names;
  names.fill("");
  int name_size = 0;

  while(name_size < kMaxSize && getline(inNames, names[name_size])) 
  {    
    name_size++;
  }

  // print all the elements in the names array
  for(auto name : names)
  {
    std::cout << name << std::endl;
  }
  inNames.close();

  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  std::ifstream inMixed;
  inMixed.open("../name_age.txt");
  if(inMixed.fail())
  {
    std::cout << "Unable to open file name_age.txt.\nShutting down\n";
    return 1;
  }

  // reset age and name arrays
  ages.fill(-1);
  names.fill("");
  int mixed_size = 0;

  // read all the values from the name_age.txt file
  while(mixed_size < kMaxSize && inMixed >> ages[mixed_size]) 
  {    
      inMixed.ignore();
      std::getline(inMixed, names[mixed_size]);
      mixed_size++;
  }

  // print valid elements in the names and ages array
  for(int index = 0; index < mixed_size; ++index)
  {
    std::cout << "Age: " << ages[index] << " for name: " <<
      names[index] << std::endl;
  }
  // print all elements in the names and ages array


  return 0;
}
