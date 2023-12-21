/*write a program to calculate to enter a number and then calculate the sum of its digit*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the 1st number = ";
    cin>>a;
    int digit,sum=0;
    while(a!=0){
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    cout<<endl<<"sum of digit = "<<sum;

}