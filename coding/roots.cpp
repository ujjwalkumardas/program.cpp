#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    int d;
    d=pow(b,2)-(4*a*c);
    int r1,r2;
    if(d>0){
        r1=((-b)+(sqrt(d)))/(2*a);
        r2=((-b)-(sqrt(d)))/(2*a);
        cout<<"that is the roots  :- "<<r1<<" ,  "<<r2;
    }
    else if(d==0){
        r1=r2=(-b)/(2*a);
        cout<<"r1 and r2 is equal to"<<r1;
    }
    else {
        cout<<"roots are complex and imaginary";
    }
}