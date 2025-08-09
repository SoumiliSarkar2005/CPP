//
// Created by Soumili on 8/9/2025.
//Display multiplication table of a number.
#include <iostream>
using namespace std;
int main() {
    int num;
    int i;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Table of "<<num<<endl;
    for(i=1;i<=10;i++) {
        double mul = num*i;
        cout<<i<<"*"<<num<<"="<<mul<<endl;
    }
    return 0;
}