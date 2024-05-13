/* (type B.)  write a program to print the elements of a 2d array*/
#include<iostream>
using namespace std;
int main(){
    int array[5][2];
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            cout<<"enter the arrray of index["<<i<<"]["<<j<<"] = ";
          cin>>array[i][j];
    }}
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
          cout<<array[i][j];
    }}

}