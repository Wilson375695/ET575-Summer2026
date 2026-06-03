#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);

    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}

/*
AI assistant used: ChatGPT
Q1) Yes, the "double" command I don't know what it do.
Q2) Yes, there are only celsius to fahrenheit and that is it.
Q3) I just use enter some number 20 celsius to 68 fahrenheit and 10 celsius to 50 fagrenheit.
*/
