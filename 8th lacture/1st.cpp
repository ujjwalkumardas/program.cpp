/* write a program to read a floating point number and an interer .if the value of the floating point number is greater than 4.14, add 10 to the integer.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    float fl;
    cout <<"enter the any integer number";
    cin>>num;
    cout<<"enter any floating number";
    cin>>fl;
    if(4.14<fl){
        num=num+10;
    }
    cout<<num;
}