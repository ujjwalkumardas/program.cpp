/*write a program to enter n number of digits and then form a number using these digits*/
#include<iostream>
#include<math.h>
using namespace std;



int main(){
int digit=0;
int array[10];
for(int i=0;i<10;i++){
    cout<<"enter the element of index["<<i<<"] = ";
    cin>>array[i];
}
int i=0;
while(i<10){
digit=digit+array[i]*pow(10,i);
i++;
}
cout<<++digit;
}