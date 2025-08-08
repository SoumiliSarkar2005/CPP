//
// Created by Soumili on 8/9/2025.
//Calculate the sum of the first N natural numbers.
#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout<<"Enter the Nth number: ";
    cin>>n;
    for (int i=1; i<=n; i++) {
        sum=sum+i;
    }
    cout<<"Sum of N natural numbers: "<<sum<<endl;
    return 0;
}
