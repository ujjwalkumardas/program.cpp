#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"sum of the natural number\n";
    cin>>n;
    cout <<"please print the sum of natural number"<<n<<"\n";
    int i=1;
    int sum=0;
    while(i<=n){
        cout<<"+"<<i;
         sum=sum+i;
       
        i++;
    }
     
  cout<<"  \nanswer  =  "<<sum;
}