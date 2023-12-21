/*write a program to perform addition ,subtraction ,multiplecation, division, integer division,and modulo division on two integer number*/
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the frist number";
    cin>>num1;
    cout<<"enter  the second number";
    cin>>num2;
    int sum,sub,mul,intdiv,modulo;
    float div;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    intdiv=num1/num2;
    modulo=num1%num2;
    div=num1/num2;
    cout<<"\nsum= "<<sum<<"\nsub= "<<sub<<"\nmul= "<<mul<<"\nintdiv= "<<intdiv<<"\nmodulo= "<<modulo<<"\ndiv= "<<div;
}