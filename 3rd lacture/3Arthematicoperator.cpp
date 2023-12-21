#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c;
int s;
cout<<"enter the value of a";
cin>>a;
cout<<"enter the value of b";
cin>>b;
cout<<"enter the value of c";
cin>>c;
s=(a+b+c)/2;
int area;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"area="<<area;
}