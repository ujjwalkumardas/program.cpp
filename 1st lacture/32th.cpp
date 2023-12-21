/*write a program to sum the series -
1+1/2+....1/n*/
#include<iostream>
using namespace std;
int main(){
    float sum=0;
    int n;
    float i,a=0;
    cout<<"enter the limit of nth number";
    cin>>n;
    for( i=1;i<=n;i++){
       a=a/i;
       sum=sum+a;
       a++;
       
    }
    cout<<sum;
}