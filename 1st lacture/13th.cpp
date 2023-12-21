/*write a program to print the following pattern
*
**
***
****
*****
----------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}