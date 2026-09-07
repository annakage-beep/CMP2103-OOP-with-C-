// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    // 1. Declare variables
    double weightPounds, heightInches;
    double weightKg, heightM, bmi;
    
    // Constants for conversion
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;

    // 2. Prompt user for input
    cout << "Enter weight in pounds: ";
    cin >> weightPounds;
    
    cout << "Enter height in inches: ";
    cin >> heightInches;

    // 3. Convert to metric
    weightKg = weightPounds * KILOGRAMS_PER_POUND;
    heightM = heightInches * METERS_PER_INCH;

    // 4. Calculate BMI
    bmi = weightKg / (heightM * heightM);

    // 5. Display BMI with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "BMI is " << bmi << "\n";

    // 6. Display status based on conditions
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25.0)
        cout << "Normal" << endl;
    else if (bmi < 30.0)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    return 0;
}