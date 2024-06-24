/*write a program to swap two strings */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[20];
    char name1[20];
    char temp[20];
    cout<<"enter the frist string = ";
    gets(name);
    cout<<"enter the second string = ";
    gets(name1);
    strcpy(temp,name);
    strcpy(name,name1);
    strcpy(name1,temp);
    puts(name1);
    puts(name);
    puts(temp);

}