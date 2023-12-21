/*write a program to create the average of natural value enter by the user*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int sum=0,n,b;
    cout<<"enter the no ";
    cin>>n;
    while(i<=n){
        b=i;
        sum=sum+i;
        cout<<i<<" ";
        i++;

    }
    cout<<"average of natural no = "<<sum <<endl<<sum/b;
}