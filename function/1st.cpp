/*write a program to convert time into minutes*/
#include<iostream>
using namespace std;
int convert(int hour ,int min){
    int minute=(hour*60)+(min);
    return minute;
}
int main(){
    int hour,min;
    cout<<"Enter the time in hour = ";
    cin>>hour;
    cout<<"Enter the time in minute = ";
    cin>>min;
    cout<<"minute is = "<<convert(hour,min);
}