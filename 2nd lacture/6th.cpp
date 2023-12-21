#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int store=i;
        while(j<=i){
            cout<<store<<" ";
            store++;
            j++;
        }
        cout<<endl;
        i++;
    }

}