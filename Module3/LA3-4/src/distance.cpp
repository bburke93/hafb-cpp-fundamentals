// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

/**
 * @brief Show the distance in inches and feet
 * 
 */
void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl;
}

void Distance::update_distance(int feet, float inches)
{
    feet_ = feet;
    inches_ = inches;
}

/**
 * @brief Plus + Operator for distances objects
 * 
 * @param rhs Second Distance object
 * @return Distance : Sum of self + d2 objects
 */
Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet();
    float inches = inches_ + rhs.inches();
    if(inches > 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    return Distance(feet, inches);
}

Distance Distance::operator - (Distance rhs) const
{
    int feet = feet_ - rhs.feet();
    float inches = inches_ - rhs.inches();
    if(inches < 0)
    {
        feet--;
        //addition of a negative is equal to subtraction of the value
        inches = 12 + inches; 
    }
    return Distance(feet, inches);
}

std::ostream &operator <<(std::ostream &os, const Distance& distance)
{
    // NOT to include a '\n or end;
    os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
    return os;
}

bool Distance::operator < (Distance rhs) const
{
    return ((feet_ * 12) + inches_) < ((rhs.feet() * 12) + rhs.inches());
}

bool Distance::operator == (Distance rhs) const 
{
    return ((feet_ * 12) + inches_) == ((rhs.feet() * 12) + rhs.inches());
}