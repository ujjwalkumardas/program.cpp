/*write a program to find whether the given number is even or odd */
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number = ";
    cin>>a;
    if (a%2==0){
        cout <<a<<" is even";
    }
    else{
        cout <<a<<" is odd";
    }
}