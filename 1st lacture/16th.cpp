/*write a program to print the following pattern
0
12
345
6789
--------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int count=0;
    int j;
    for(i;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}