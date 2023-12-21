#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    
    while(i<=n){
        char c='*';
        int j=1;
    while(j<=i){
        cout<<c<<" ";
        j++;
    }
    cout<<endl;
    i++;
    }
}