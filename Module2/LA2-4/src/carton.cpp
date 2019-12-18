#include <iostream>
#include "carton.h"

// DO not use the static keyword
// const double Carton::kMaxSize = 100;
const double Carton::kMinLength = 6;
const double Carton::kMinWidth = 3;
const double Carton::kMinHeight = 0.25;

// Constructors have access to private data members
/**
 * @brief Construct a new Carton:: Carton object
 * 
 */
Carton::Carton()
{
    height_ = 0;
    width_ = 0;
    length_ = 0;
}

Carton::Carton(double length, double width, double height)
{
    try
    {
        SetMeasurements(length, width, height); 
    }
    catch(const std::out_of_range e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }
    
}

Carton::~Carton()
{
    
}

void Carton::SetMeasurements(double length, double width, double height)
{
    if(length <= 0 || width <= 0 || height <= 0)
    {
        throw std::out_of_range("All measurements must be greater than zero");
    }
    length_ = length;
    width_ = width;
    height_ = height;
}

double Carton::length()
{
    return length_;
}

double Carton::width()
{
    return width_;
}

double Carton::height()
{
    return height_;
}

void Carton::set_length(double length)
{
    if(length < kMinLength)
    {
        std::string error_msg = "Length must be greater than " + std::to_string(kMinLength);
        throw std::out_of_range(error_msg);
    }
    length_ = length;
}

void Carton::set_width(double width)
{
    width_ = width;
}

void Carton::set_height(double height)
{
    height_ = height;
}

void Carton::ShowInfo()
{
    std::cout << "Box height: " << height() << std::endl;
    std::cout << "Box width: " << width() << std::endl;
    std::cout << "Box length: " << length() << std::endl;
    std::cout << "Box volume: " << Volume() << std::endl;
}

double Carton::Volume() const
{
    return length_ * width_ * height_;
}

/**
 * @brief Capture output in an outStream
 * 
 * @param out The outStream to send output to
 */
void Carton::WriteData(std::ostream &out) const
{
    out << length_ << "," << width_ << ',' << height_ << ',' << Volume() << std::endl;
}
