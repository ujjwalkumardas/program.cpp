/*write a program to display the largest of 10 number using ternary operator*/
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int l;
    cin>>l;
    int largest=0;
    while (a<=l)
    {
        if(a>largest){
            largest=a;
            cout<<largest<<" , ";
        }
        a++;
        
    }
    cout<<" \n"<<largest;
}