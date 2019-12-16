#include <iostream>

using namespace std;

int main() 
{
    int age;  //int: signed integers

    // cout: for system output
    std::cout << "This is a test program " << std::endl;
    cout << "Another line under namespace std " << endl;
    cout << "Wildcats" << "WSU" << "Ogden" << endl;

    //cin: for system/user input
    cout << "Enter your age: ";
    cin >> age;
    cout << "I see you are: " << age << endl;

    // sizeof(): get the size of the variable
    cout << "Integers are: " << sizeof(int) << " bytes." << endl;
    cout << "Mine Integer value: " << INT32_MIN << 
        " Max Integers value: " << INT32_MAX << " bytes." << endl;
    return 0;
}