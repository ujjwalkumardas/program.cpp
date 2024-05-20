/*write a program to find the length of the string */
#include<iostream>
using namespace std;
int main(){
    char str[20];
    gets(str);
    int i=0;
    int length=0;
    while(str[i]!='\0'){
        cout<<str[i];
        i++;
        length++;
    }
    cout<<"\nlength of string = "<<length;
}