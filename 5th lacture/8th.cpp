/* write a program to read the no untill -1 is encounterd cout the negative ,positive or zero enter by the user*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<n<<" is negative number";
    }
    else if(n>0){
         cout<<endl<<n<<" is positive number"; 
    }
    else{
          cout<<endl<<"enter the digit is 0";
    }
}