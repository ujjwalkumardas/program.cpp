/*enter two integer as dividend and divisor. if the divisor is greator than zero ,divide the dividend by the divisor. assign their result to an integer variable rem and there quotient to a floating point number quo . */
#include<iostream>
using namespace std;
int main(){
    int dividend,divisor;
    int rem;
    float quo;
    cout<<"enter the dividend = ";
    cin>>dividend;
    cout<<"enter the divisor = ";
    cin>>divisor;
    if(divisor>0){
        rem=dividend/divisor;
        quo=dividend%divisor;
    }
    else{
        cout<<"divisor is less than 0";
    }
    cout<<endl<<rem<<endl<<quo;
}