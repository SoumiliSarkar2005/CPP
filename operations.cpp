// Created by Soumili on 7/31/2025.
//Addition_Substraction_Multiplication_Division
#include <iostream>
using namespace std;
int main() {
    int num1,num2,sum,diff,mul,div;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The diff is: "<<diff<<endl;
    cout<<"The mul is: "<<mul<<endl;
    cout<<"The div is: "<<div<<endl;
    return 0;
}
