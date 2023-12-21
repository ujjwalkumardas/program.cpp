/*write a program to determine whether a person is eligible to vote*/
#include<iostream>
using namespace std;
int main(){
    int age ;
    cout<<"enter the number";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible to vote";
    }
    else{
        cout <<"you are not eligible to vote";
    }
}