#include<iostream>
using namespace std;
int main(){
    int a,i=1;
    cin>>a;
    while(i<=a){
        int j=1;
        while(j<=a){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}