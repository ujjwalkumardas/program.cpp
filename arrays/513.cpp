/*write a program to merge two unstored array*/
#include<iostream>
using namespace std;
int main(){
    int array[10],array1[5];
    int array3[15];
    for(int i=0;i<10;i++){
        cout<<"enter the value of array of index y["<<i<<"] = ";
        cin>>array[i];
    }
    cout<<"enter the value of array1"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter the value of array of index x["<<i<<"] = ";
        cin>>array1[i];
    }
    int index=0;
    cout<<"-----------------------------------------------------------";
    for(int i=0;i<10;i++){
        array3[index]=array[i];
        index++;
    }
    
    for(int i=10;i<15;i++){

        array3[i]=array1[i-10];
    }
    for(int i=0;i<15;i++){
        cout<<", "<<array3[i];
    }
    
}