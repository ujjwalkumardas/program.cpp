/*write a program to read an array of n numbers and then ,find out the smallest number*/
#include<iostream>
using namespace std;
int main(){
    int array[8];
    for(int i=0;i<8;i++){
        cout<<"enter the element of index [" <<i<<"] = ";
        cin>>array[i];
    }
    int smallest=array[0];
    for(int i=0;i<8;i++){
        if(array[i]<smallest){
            smallest=array[i];
        }
    }
    cout<<smallest;

}