/*print the all even number (1 < even number < nth)*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"print the all even number\n";
    cout<<"enter the number :: \n";
    cin>>a;
    int i=1;
    while(i<=a){
        if(i%2==0)
        cout<<i<<" , ";
        i++;
    }
    cout<<"\nall of the natural number ";
}