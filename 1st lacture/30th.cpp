/*write a program to enter a decimal number. calculate and display the binary eqivalent of this number*/
#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter the number = ";
    cin>>i;
    int digit=0;
    while(i!=0){
    digit=i%2;//to read binary right to left
    cout<<digit; 
    i=i/2; 
    }
}