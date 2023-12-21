#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a= ";
    cin>>a;
    cout<<"enter the value of b= ";
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform ";
    cin>>op;
    switch(op){
        case '+':cout<<(a+b);
        break;
        case '-': cout<<(a-b);
        break;
        case '*': cout<<(a*b);
        break;
        case '/': cout<<(a/b);
        break;
        default :cout<<"error";
        }
}