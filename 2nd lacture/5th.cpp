#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    int p=1;
    while(i<=n){
       int j=1; 
        while(j<=i){
            cout<<p<<" ";
            p++;
            j++;
        }
        cout<<endl;
        i++;
    }
}