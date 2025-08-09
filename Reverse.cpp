//
// Created by Soumili on 8/9/2025.
//Reverse a number (e.g., 123 → 321)
#include <iostream>
using namespace std;
int main() {
    int num, rev_num=0, rem;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0) {
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    cout<<"The reverse number is: "<<rev_num<<endl;
    return 0;
}
