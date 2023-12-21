/*write a program to calculate average of two numbers. print there deviation*/
#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    float average,div1,div2;
    cout<<"enter frist number = ";
    cin>>num1;
     cout<<"enter second number = ";
     cin>>num2;
     average=(num1+num2)/2;
     div1=num1-average;
     div2=num2-average;
     cout<<"\naverage = "<<average<<"\ndiv1 = "<<div1<<"\ndiv2 = "<<div2;
}