//
// Created by Soumili on 8/1/2025.
//Check if a number is positive, negative, or zero.

#include <iostream>
using namespace std;
int main() {
    double num;
    cout<<"Enter a number: ";
    cin>>num;
    //Check  whether positive, negative or zero.
    if(num==0)
        cout<<"The number is zero."<<endl;
    else if (num<0)
        cout<<"The number is negative."<<endl;
    else
        cout<<"The number is positive."<<endl;
    return 0;
}

