#include<iostream>
using namespace std;
int main(){
     int a;
    cout<<"print the even number";
    cout<<"enter the number \n";
    cin>>a;
    int i=1;
    int sum=0;
    while(i<=a){
        if(i%2==0){
        cout<<i<<" , ";
        sum=sum+i;
        }
        i++;
    }
      cout<<"\nall of  sum of the even number =";
    cout<<sum;
  
}
