//
// Created by Soumili on 8/9/2025.
//Print numbers from 1 to N using for loop.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the nth number: ";
    cin>>n;
    cout<<"The series: ";
    for (int i=1; i<=n; i++) {
        cout<<i<<" ";
    }
    return 0;
}
