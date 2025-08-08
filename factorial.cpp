//
// Created by Soumili on 8/9/2025.
//Find the factorial of a number.
#include <iostream>
using namespace std;
int main() {
    int num;
    unsigned long long fact=1;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0)
        cout<<"no factorial for a negative number."<<endl;
    else if ((num==0)||(num==1))
        cout<<"The factorial is 1.";
    else
        for(int i=2;i<=num;i++)
            fact*=i;
    cout<<"The factorial is: "<<fact<<endl;
    return 0;
}

