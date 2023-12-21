/*write a program to swap two number without using a temporary variable*/
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter frist number = ";
    cin>>num1;
    cout<<"enter second number = ";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
     cout<<"\nfrist num = "<<num1<<"\nsecond num = "<<num2;
}