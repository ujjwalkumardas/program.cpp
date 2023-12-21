/*write a program to print the following pattern
     1
    22
   333
  4444
--------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int m=1,k;
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<" ";
        }
        for( k=1;k<=i;k++){

            cout<<m;
            
        }
        for(int l=k-2;l>0;l--){
            cout<<m;
        }
        m++;
    cout<<endl;
    }}