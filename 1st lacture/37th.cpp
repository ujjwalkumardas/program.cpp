/*write a program to sum of squares of even numbers*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n,sum=0,m;
cout<<"enter the number = ";
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2==0){
        m=pow(i,2);
        cout<<m<<"+";
        sum=sum+m;
        

    }
}cout<<"\nsum of the square of even number = "<<sum;
}