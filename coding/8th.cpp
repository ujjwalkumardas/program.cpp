/*write a program to convert degrees fahrenheit into degrees celsius.*/
#include<iostream>

using namespace std;
int main(){
float  celsius,fahrenheit;
    cout<<"enter the fahrenheit ";
    cin>>fahrenheit;
    celsius = (fahrenheit- 32)*0.56;
    cout <<celsius;
}