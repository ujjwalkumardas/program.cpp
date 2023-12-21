/*write a program to print the multiplication table of n is enter by user*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the no. ";
    cin>>n;
    for(i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}