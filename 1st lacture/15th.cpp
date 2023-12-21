/*write a program to print the followng pattern
1
22
333
4444
55555
-------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}