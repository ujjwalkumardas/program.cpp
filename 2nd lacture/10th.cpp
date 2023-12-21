#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=0;
        
        while(j<=n){
           char ch='A'+i+j-1; 
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}