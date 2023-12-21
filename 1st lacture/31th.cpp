/*write a program to enter a binary number. calculate and display the decimal equivalent of this number*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number = ";
    cin>>n;
    int i=0,digit=0,sum=0;
    while(n!=0){   
       sum=sum+pow(2,i);
       n=n/10;
       i++;
    }
    cout<<endl<<"decimal number = "<<sum;
}