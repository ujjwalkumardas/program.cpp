/*write a pattern print the following pattern*/
#include<iostream>
using namespace std;
int main(){
    int i=1,n,j,k,l;
    cin>>n;
    for(i;i<=n;i++){
        for( j=n;j>i;j--){
            cout<<" ";
        }
        for( k=1;k<=i;k++){
            cout<<k;
        }
        for( l=k-2;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
}