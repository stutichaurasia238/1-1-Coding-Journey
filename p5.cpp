// Arithmetic Operator - Method 1 to solve Default Precision
#include <iostream>
#include <iomanip> // Include the <iomanip> header for formatting
using namespace std;
int main()
{
    //arithmetic operator ( + - * / %)
    // 2 printed instead of 2.0
    /*In C++, by default, cout is configured to format floating-point numbers in a way that removes trailing zeros and decimal points if they are not necessary to represent the value. 
    This behavior is often referred to as "default precision."
     When the value is 2.0, it can be displayed as just 2 without loss of information, so cout omits the decimal point and trailing zeros.*/
    
    float a = 4.0/2.0;

    // Use std::fixed to display floating-point numbers with a fixed number of decimal places
    cout << std::fixed; // necessary to write

    // Use std::setprecision to set the number of decimal places
    cout << std::setprecision(1) << a << endl; // Display with 1 decimal place

    cout << std::setprecision(1) << 4.0 / 2.0 << endl; // Display with 1 decimal place

}