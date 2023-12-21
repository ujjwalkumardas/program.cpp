/*write a program to print the following pattern
**********
**********
**********
**********
**********
------------------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
