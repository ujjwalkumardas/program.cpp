/*write a program to find wheather the array of integers contains a duplicate number*/
#include<iostream>
using namespace std;
int main(){
    int array[5];
    int k=0;
    for(int i=0;i<5;i++){
        cout<<"enter the element of index["<<i<<"] = ";
    cin>>array[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]==array[j]){
                k=1;
                cout<<"present in dublicate enement = "<<array[i] <<endl;
                break;

            }
        }
        cout<<array[i]<<" , ";
    }
    if(k==0){
        cout<<"not ptesent dublicate element ";
    }
    
}