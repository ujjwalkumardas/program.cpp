/*write a program to convert characters of a string into lower case*/
#include<iostream>
using namespace std;
int main(){
    char str[20];
    gets(str);
    int i=0;
    while(str[i]!='0'){
        if(str[i]>='A'&&str[i]<='Z'){
            char temp=str[i];
            str[i]=temp+32;
        }
        i++;
    }
    int j=0;
    puts(str);
}