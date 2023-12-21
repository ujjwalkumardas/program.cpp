/*wite a program to swap two numbers using a temporary variable */
#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"enter frist number = ";
    cin>>num1;
    cout<<"enter second number = ";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"\nfrist num = "<<num1<<"\nsecond num = "<<num2;

}