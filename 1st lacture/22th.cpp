/*write a program using for loop to print all the numbers from m-n there by classifying them as even or odd*/
#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"enter the starting point";
cin>>m;
cout<<"enter the last point";
cin>>n;
for( m;m<=n;m++){
    
    if(m%2==0){
        cout<<m<<" even";
        
    }
    else 
    {
        cout<<"          "<<m<<" odd"<<endl;
    }


}
}