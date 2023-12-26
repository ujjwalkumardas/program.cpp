/*consider the code given here to calculate the sum of numbers enter by user the frist version user the break statements. the second version replace break by if-else construct */

//using break statement
#include<iostream>
using namespace std;
int main(){
    int sum=0, num;
    cin>>num;
    while(1){
        sum=sum+num;
        break;
    }
cout<<sum;
}
