/*write a program two find largest of two numbers using ternary operator*/
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the frist number";
    cin>>num1;
    cout<<"enter the second number";
    cin>>num2;
    int largest;
    largest= num1>num2?num1:num2;
    cout<<largest<<" is largest";
}
