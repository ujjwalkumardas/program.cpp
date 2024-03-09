/*write a program to calculate p(n/r)*/
#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
for(int i=1;i<=n;i++){
factorial=factorial*i;
}
return factorial;
}
int main(){
    int n,r;
    cout<<"enter the number n = ";
    cin>>n;
    cout<<"enter the number r = ";
    cin>>r;
    float ans=float(fact(n)/fact(r));
cout<<"p(n/r) = "<<ans;
}