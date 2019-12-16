#include <iostream>
using namespace std;

// Constants
const float kMetersToInches = 39.37;
const float kKiloToPound = 2.204;
const int kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

int main()
{
    // Calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight = 0, height = 0, bmi = 0;

    cout << "Please enter your weight: ";
    cin >> weight;

    cout << "Please enter your height: ";
    cin >> height;

    bmi = weight/(height * height);
    cout << "Your BMI (metric) is: " << bmi << endl;

    // Task: Now, convert it to imperial units
    // 1 meter = 39.37 inches
    // 1 kg - 2.204 lbs
    // Calculate BMI (imperial): (weight(lbs) * 703)/[height(in)]^2
    weight = weight * kKiloToPound;
    height = height * kMetersToInches;
    bmi = (weight * kBMIImperial)/(height * height);
    cout << "Your BMI (imperial) is: " << bmi << endl;;

    // Task: Print if they are in the "good" range: BMI in the range 18.5 to 24.9
    if (bmi > kLowBMILimit && bmi < kHighBMILimit)
    {
        cout << "Your BMI " << bmi << " is in the normal range." << endl;
    }
    else 
    {
        cout << "Your BMI " << bmi << " is outside the normal range." << endl;
    }

    cout << "Thank you for using the BMI program!" << endl;

    return 0;
}