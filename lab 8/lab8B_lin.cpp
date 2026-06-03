#include <iostream>
using namespace std;

int main()
{
    double temperature, result;
    int choice;

    cout << "Temperature Conversion Program\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;

    switch (choice)
    {
        case 1:
            result = (temperature * 9.0 / 5.0) + 32;
            cout << temperature << " Celsius = "
                 << result << " Fahrenheit" << endl;
            break;

        case 2:
            result = (temperature - 32) * 5.0 / 9.0;
            cout << temperature << " Fahrenheit = "
                 << result << " Celsius" << endl;
            break;

        case 3:
            result = temperature + 273.15;
            cout << temperature << " Celsius = "
                 << result << " Kelvin" << endl;
            break;

        case 4:
            result = (temperature - 32) * 5.0 / 9.0 + 273.15;
            cout << temperature << " Fahrenheit = "
                 << result << " Kelvin" << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a number from 1 to 4." << endl;
    }

    return 0;
}