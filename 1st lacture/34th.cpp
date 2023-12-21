/*write a program to sum the series -
1/1^2+1/2^2+.......1/n^2*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float sum =0,a;
    cout<<"sum of the series = ";
    for(int i=1;i<=10;i++){
        a=1/pow(i,2);
        sum=sum+a;
    }
    cout<<sum;
}