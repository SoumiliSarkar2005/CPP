// Created by Soumili on 7/31/2025.
#include <iostream>
using namespace std;
int main() {
    float temp_C;
    cout<<"Enter a temperture in celcius: "<<endl;
    cin>> temp_C;
    float temp_F = ( temp_C * 9.0 / 5.0) + 32;
    float temp_K = (temp_C +273.15);
    cout<< " The temperature in Fahrenheit: "<<temp_F <<endl;
    cout<< "The temperature in Kelvin: "<<temp_K<<endl;
    return 0;
}


