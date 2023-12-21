/*write a program using do-while loop to read the numbers unit-1 is encountered. count the number of prine number and pomposite numbers enter by the user*/
#include<iostream>
using namespace std;
int main(){
    int num,i;
    int fact=0,prime=0,composite=0;
    cout<<"enter the nomber";
    cin>>num;
    do{
        for(i=1;i<=num/2;i++){
            if(num%i==0){
                fact=1;
            }
        }
    
    if(fact==0){
        prime++;
    }
    else{
        composite++;
        fact=0;
        cout<<"\n\n enter any number";
        cin>>num;
    }
    }
    while(num!=-1);
        cout<<"\ncount of prime numbers entered = "<<prime;
        cout<<"\n count of composit numbers enterd = "<<composite;
    
}