/*write a program to find the larger between two number*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the two number = ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b;   
    }
    else if(b>a){
         cout<<b<<" is greater than "<<a; 
    }
    else{
        cout<<" \nboth are equal";
    }

}