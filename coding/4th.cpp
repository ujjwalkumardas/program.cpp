/*write a program to print the digit at one's place of a number*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout <<"enter any number= ";
    cin>>n;
    int digit;
    digit=n%10;
    cout <<"last digit of the number is = "<<digit;

}