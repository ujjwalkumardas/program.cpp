#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"print the prime number";
    cout<<"enter the number \n";
    cin>>a;
    int i=2;
    int sum=0;
    while(i<=a){
        if(i%2!=0){
        cout<<i<<" , ";
        sum=sum+i;
        }
        i++;
    }
      cout<<"\nall of  sum of the prime number =";
    cout<<sum;
}