//
// Created by Soumili on 8/2/2025.
//Find the largest of three numbers.

#include <iostream>
using namespace std;
int main() {
    double num1,num2,num3;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"Enter third number: "<<endl;
    cin>>num3;
    if (num1>num3) {
        if (num1>num2)
            cout<<"the first number is largest"<<endl;
        else
            cout<<"The second number is largest."<<endl;
    }
    else
        cout<<"The third number is largest."<<endl;
    return 0;
}

