//
// Created by Soumili on 8/2/2025.
//Check whether a character is a vowel or consonant.

#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    //Checking
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"The character is a vowel"<<endl;
    else
       cout<<"The character is a consonent"<<endl;
    return 0;
}
