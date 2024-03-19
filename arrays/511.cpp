/*write a program to insert a number at a given loacation in an array*/
#include<iostream>
using namespace std;
int main(){
    int array[10];
    for(int i=0;i<10;i++){
        cout<<"enter the element of index ["<<i<<"] = ";
        cin>>array[i];

    }
    cout<<"possion of index in there stored in an element = ";
    int endx;
    cin>>endx;
    cout<<endl;
    cout<<"enter the element whose stored the value = ";
    int elem;
    cin>>elem;
    int temp;
    for(int i=0;i<10;i++){
        temp=array[endx];
        array[endx]=elem;
        
    }
    for(int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }

}