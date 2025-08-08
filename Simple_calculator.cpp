//
// Created by Soumili on 8/3/2025.
//Simple calculator using switch case.

#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"Enter an operator(+,-,*,/): ";
    cin>>op;
    switch(op) {
        case '+':
        {
            double sum = num1+num2;
            cout<<"Result "<<sum<<endl;
        } break;
        case '-':
        {
            double diff= num1-num2;
            cout<<"Result "<<diff<<endl;
        } break;
        case '*':
        {
            double prod= num1*num2;
            cout<<"Result "<<prod<<endl;
        } break;
        case '/':
        {
            if (num2!=0) {
                double div= num1/num2;
                cout<<"Result "<<div<<endl;
            }
            else
                cout<<"Invalid!"<<endl;
        } break;
        default:
            cout<<"Something went wrong";
    }
    return 0;
}
