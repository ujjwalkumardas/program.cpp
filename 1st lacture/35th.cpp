/*write a program to sum the series 
1/1+2^2/2+3^3/3+.......*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float sum=0.0,a=0;
    cout<<"enter the nth number = ";
    int n;
    cin>>n;
    for(float i=1;i<=n;i++){
        a=pow(i,i)/i;
        sum=sum+a;
    }
    cout<<"series = "<<sum;
}