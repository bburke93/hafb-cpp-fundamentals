#include <iostream>
#include "cars.h"

int HorsePower()
{
    return 150;
}

// using namespace lamborghini;
int lamborghini::HorsePower() {
    return 760;
}

void lamborghini::cout() {
    std::cout << "Lamborghini makes the best tractors";
}

// using namespace porsche;
int porsche::HorsePower()
{
    return 700;
}