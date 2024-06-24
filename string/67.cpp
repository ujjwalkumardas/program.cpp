/*write a program to reverse the given string  */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[20];
    cout<<"enter the string = ";
    gets(str1);
    int j=strlen(str1)-1;
    int i=0;
    while(i<j){
        char temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;
        j--;
    }
puts(str1);
}