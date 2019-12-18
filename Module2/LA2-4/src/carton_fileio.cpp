#include <fstream>
#include "carton_fileio.h"

std::string ReadDataFormatFromFile(std::string filename,
        std::array<Carton,kMaxArraySize>& cartons, 
        int& rec_num)
{
    std::ifstream data_input(filename);     // Create file handler
    if(data_input.fail())
    {
        return "Unable to open file";
    }
    // Good to go
    std::string message = "";
    double side1, side2, side3; // read data from file
    // Load data
    while(rec_num < kMaxArraySize && data_input >> side1)
    {
        data_input >> side2 >> side3;
        // Load data into array
        try
        {
            cartons[rec_num] = Carton(side1, side2, side3);
            ++rec_num;  // Keep track of number of records loaded
        }
        catch(const std::out_of_range error)
        {
            message += error.what();
            message +="\n";
        }        
    }
    data_input.close();
    return message;
}

void WriteDataToFile(std::string filename,              
        std::array<Carton, kMaxArraySize>& cartons,     
        int rec_num)
{
    std::ofstream file_out(filename);

    // TODO: check for writing privileges

    for(int index = 0; index < rec_num; ++index)
    {
        cartons[index].WriteData(file_out);
    }
}