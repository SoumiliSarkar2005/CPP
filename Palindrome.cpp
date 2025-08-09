//
// Created by Soumili on 8/10/2025.
//Reverse a number and check palindrome.
#include <iostream>
using namespace std;
int main() {
    int num, rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    int org_num=num;
    while (num!=0) {
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<"The reverse number is: "<<rev<<endl;
    if (org_num==rev)
        cout<<"The reverse number is palindrome"<<endl;
    else
        cout<<"The reverse number is not palindrome"<<endl;
    return 0;
}
