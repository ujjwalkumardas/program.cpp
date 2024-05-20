/*write a program to convert characters of a string in upper case to lower case and lower case to upper case */
#include<iostream>
using namespace std;
int main(){
    char str[20];
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&& str[i]<='z'){
            char temp=str[i];
            str[i]=temp-32;  
        }
        else if(str[i]>='A'&& str[i]<='Z'){
            char temp=str[i];
            str[i]=temp+32;
        }
        i++;
    }
    int j=0;
    while(str[j]!='\0'){
        cout<<str[j];
        j++;
    }
}