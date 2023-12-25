/*to calculate the sum of all positive numbers entered by the user by using goto statement */
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    read:
    cout<<"\n enter the number . enter 999 to end :-";
    cin>>num;
    if(num!=999){
        if(num<0)
        goto read;
        sum=sum+num;
        goto read;
    }
    cout<<"\n sum fo the number entered by the user is  = "<<sum;
}