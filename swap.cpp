//
// Created by Soumili on 8/1/2025.
//Swap two numbers without using a temporary variable.

#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter number in a: ";
    cin>>a;
    cout<<"Enter number in b: ";
    cin>>b;
    cout<<"Before swapping: "<<"a="<<a<<" "<<"b="<<b<<endl;
    a=(a+b);
    b=a-b;
    a=a-b;
    cout<<"After swapping: "<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
