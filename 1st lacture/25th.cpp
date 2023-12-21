/*write a program to classify a given number as prime or composite*/
#include<iostream>
using namespace std;
int main(){
    int fact=0;
    int num,i;
    cout<<"enter the numbeer = ";
    cin>>num;
    for( i=2;i<=num/2;i++){
        if(num%i==0){
            fact=1;
            break;
        }}
        if(fact==1){
            cout<<endl<<num<<"is not a composite number";
        }
        else{
            cout<<"\n"<<num<<" is a prime number";
        }
        
    
}