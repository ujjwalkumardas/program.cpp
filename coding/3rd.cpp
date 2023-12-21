/*wrote a program to read a character in upper case and then print it in lowercase*/
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter any characher = ";
    cin>>ch;
    cout<<"lower case of character is "<<(char)tolower(ch);



}