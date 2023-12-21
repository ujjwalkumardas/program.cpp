/*reverse of number*/
#include<iostream>
using namespace std;
int main(){
    int n,m,p;
    cout<<"enter any number ";
    cin>>n;
    while(n!=0){
        m=n%10;
        n=n/10;
        cout<<m;
    }
}