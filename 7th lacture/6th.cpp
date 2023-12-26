//same program using without break statement
#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    int flag=1;
    cin>>i;
    while(flag){
        sum=sum+i;
        flag=flag-1;
    }
    cout<<sum;
} 