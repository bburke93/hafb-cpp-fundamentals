#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>

void Load_Data(std::vector<Data> &data, const std::string &input_file)
{
    csvstream csvinput(input_file);  
    // Rows have a key = column name, value = cell data
    std::map<std::string, std::string> row;
    // Extract the animal column
    Data temp;
    while(csvinput >> row)
    {
        // The key is the column name
        temp.id = std::stoi(row["id"]); 
        temp.name = row["name"];
        temp.animal = row["animal"];
        data.push_back(temp);
    }
}