//
// Created by Soumili on 8/8/2025.
//Check whether a number is divisible by 5 and 11.
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a numbers: ";
    cin>>num;
    if ((num%5==0) && (num%11==0))
        cout<<"Your number is divisible by 5 and 11."<<endl;
    else if ((num%5==0) && (num%11!=0))
        cout<<"Your number is divisible by 5 but not by 11.";
    else if ((num%11==0) && (num%5!=0))
        cout<<"Your number is divisible by 11 but not by 5.";
    else
        cout<<"Your number is niether divisible by 5 nor 11.";
    return 0;
}
