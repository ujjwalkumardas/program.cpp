/*write a program to calculate the sum of frist natural number*/
#include<iostream>
using namespace std;
int main(){
int a,sum=0;
cout<<"enter the number";
cin>>a;
int i=0;
while(i<=a){
    sum=sum+i;
    cout<<sum <<" ";
    i++;

}
cout<<" \n"<<sum;
}