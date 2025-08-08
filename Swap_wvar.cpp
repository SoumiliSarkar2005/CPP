//
// Created by Soumili on 8/1/2025
// Swap two numbers using a temporary variable.

#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Assign number in a : ";
    cin>>a;
    cout<<"Assign number in b : ";
    cin>>b;
    cout<<"Before swapping the numbers are: "<<endl;
    cout<<"a= "<<a<<" "<<"b="<<b<<endl;
    c=a+b;
    a=c-a;
    b=c-b;
    cout<<"After swapping the numbers are: "<<endl;
    cout<<"a= "<<a<<" "<<"b="<<b<<endl;
    return 0;
}
