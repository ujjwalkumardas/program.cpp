/*write a program to read marks of 50 students in the range of 0-100. then make 10 groups such as 1-10,10-20,20-30,30-40 and so on. count the number of values that falls in each group. and display the results.*/
#include<iostream>
using namespace std;
int main(){
    int marks[50];
    int groups[10]={0};
    cout<<"enter the marks of 50 student : ";
    for(int i=0;i<50;i++){
        cout<<"enter marks"<<i<<endl;
        cin>>marks[i];
        ++groups[(int)(marks[i]/10)];
    }
    cout<<"**************************************";
    cout<<"group \t\t frequency";
    for(int i=0;i<10;i++){
        cout<<"\n"<<i<<groups[i];
    }
}