/*write a program to read and display n number using an array*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int m;
        cout<<"enter the element "<<i<<" = ";
        cin>>m;
        arr[i]=m;
    }
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<" , ";
    }
}