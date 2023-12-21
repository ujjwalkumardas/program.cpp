/*write a program to calculate sum of cubes ofnumbers from 1-n           */
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int  sum=0,a;
    cout<<"enter the nth number = ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a=pow(i,3);
        sum=sum+a;
        cout<<a<<" ";
    }
    cout<<"series = "<<sum;
}