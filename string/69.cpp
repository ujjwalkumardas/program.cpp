/*write a program to extract the substring from a given string */
#include<iostream>
using namespace std;
int main(){
    char str[20];
    char substring[10];
    cout<<"enter the main string = ";
    gets(str);
    int m,n;
    cout<<"enter the position of substring = ";
    cin>>n;
    cout<<"enter the length of the string = ";
    cin>>m;
    int i=0;
    int j=0;
    i=n;
    while(str[i]!='\0'&& m>=0){
        substring[j]=str[i];
        i++;
        j++;
        m--;
    }
    cout<<"substring = ";
    puts(substring);
    


}