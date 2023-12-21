#include<iostream>
using namespace std;
void printable(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }cout<<endl;
}
void swapi(int arr[],int no){
    for(int i=0;i<no;i+2){
if(i+1<no){
    swap(arr[i],arr[i+1]);
}
    }

}
int main(){
    int arr[6]={1,2,3,4,5,6};
swapi(arr,6);
printable(arr,6);
}