/*write a program to interchange the biggest and the smallest number in the array using functions*/
#include<iostream>
using namespace std;
void insert(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<"enter the number of index["<<i<<"] = ";
        cin>>array[i];
    }
}
int searching(int array[],int size){
    int biggest ,smallest;
    biggest=smallest=-1;
    for(int i=0;i<size;i++){
        if(array[i]<biggest){
            biggest=array[i];
            cout<<biggest<<endl;
        
        }
        if(array[i]>smallest){
            smallest=array[i];
            cout<<smallest<<endl;
        }
    }
    
}

int main(){
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int array[n];
    int size=sizeof(array)/sizeof(array[0]);
    insert(array,size);
    searching(array,size);

    
}