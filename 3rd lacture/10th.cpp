/*write aprogram two find largest of three numbers using ternary operator*/
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    int largest;
    cout<<"enter the frist number= ";
    cin>>num1;
    cout<<"enter the second number= ";
    cin>>num2;
    cout<<"enter the third number= ";
    cin>>num3;
    largest=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    cout<<largest<<" is greator";

}