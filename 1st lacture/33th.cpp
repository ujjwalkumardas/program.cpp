/*write a program sum of the series
1/2+2/3+...... n/(n+1)   */
#include<iostream>
using namespace std;
int main(){
    float sum=0.0,a=0;
    cout<<"enter the nth number = ";
    int n;
    cin>>n;
    for(float i=1;i<=n;i++){
        a=i/(i+1);
        sum=sum+a;
    }
    cout<<"series = "<<sum;
}