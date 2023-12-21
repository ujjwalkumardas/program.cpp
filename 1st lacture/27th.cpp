/*write a program to calculate pow(x,n)*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int x,n;
cout<<"enter the number = ";
cin>>x;
cout<<"enter power of num = ";
cin>>n;
long long int paw;
paw = pow(x,n);
cout<<n<<" is a power of "<<x<<" = "<<paw;

}