/*write a program using for loop to calculate factorial of a number*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int j=1;
    cout<<"enter the number";
    cin>>n;
    if(n==0){
        j=1;
    }
     else{
        for(int i=1;i<=n;i++){ 
       j=j*i;
       cout<<j<<"*";
     }}
    cout<<endl<<j <<" is factorial of n";
}