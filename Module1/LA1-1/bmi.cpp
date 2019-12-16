#include <iostream>
using namespace std;

int main()
{
    // Calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight = 0, height = 0, bmi = 0;

    cout << "Please enter your weight: ";
    cin >> weight;

    cout << "Please enter your height: ";
    cin >> height;

    cout << "You BMI is: " << weight/(height*height);

    return 0;
}