/*write a program to print the prime factor of a program*/
#include<iostream>
using namespace std;
int main(){
    int n,st,sc,rd;
    cout <<"enter the number = ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%2==0){
            st=n/2;
        cout<<endl<<st;
        }
        else if(n%3==0){
             st=n/3;
        cout<<endl<<st;
        }
        else if(n%5){
             st=n/2;
        cout<<endl<<st;
        }
        n=n/2;
    }
}