/*write a program using for loop to calculate the average of frist n natural number*/
#include<iostream>
using namespace std;
int main(){
    int n;
     int i;
    cout<<"enter the nth number = ";
    cin>>n;
    float sum;
 for( i=1;i<=n;i++){
sum=sum+i;
 }   
 cout<<"average of natural number = "<<sum/n;
}