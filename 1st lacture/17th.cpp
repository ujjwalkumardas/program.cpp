/*write a program to print the following pattern
A
AB
ABC
ABCD
ABCDE
ABCDEF
-----------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    
    for(int j=1;j<=6;j++){
        char i=65;
for(int k=1;k<=j;k++){
    cout<<i;
    i++;
}cout<<endl;
    }}