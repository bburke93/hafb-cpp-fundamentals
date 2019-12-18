#include <iostream>
#include <array>
#include "carton.h"
#include "carton_fileio.h"

int main() 
{
  // create a Carton object using the default constructor
  Carton box;
  box.ShowInfo();

  box.set_height(12.5);
  box.set_width(10.9);
  box.set_length(30);

  box.ShowInfo();

  // create a Carton object using the other constructor
  Carton box2(34,89,11);
  box2.ShowInfo();

  Carton box3(15, 25, 6);
  box3.ShowInfo();

  // create an array of Cartons
  std::array<Carton, kMaxArraySize> boxes;

  // add some valid elements to the array
  boxes[0] = Carton(12,41,52);

  // Read data from file
  std::string message;
  int record_size = 0;

  message = ReadDataFormatFromFile("../carton_data.txt", boxes, record_size);
  std:: cout << message << "Records loaded: " << record_size << std::endl;

  // loop through the array
  std::cout << "\nPrinting Array: " << std::endl;
  for(auto box = 0; box < record_size; ++box) 
  {
    boxes[box].ShowInfo();
  }

  // write data to file
  WriteDataToFile("../carton_data.csv", boxes, record_size);

  return 0;
}