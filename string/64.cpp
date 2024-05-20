/*write a program to concatenate two strings*/
#include<iostream>
using namespace std;
int main(){
    char str1[20];
    char str2[20];
    char concat[40];
    int i=0;
    int j=0;
    cout<<"enter the 1st string = ";
    gets(str1);
    cout<<"\n enter the 2nd string = ";
    gets(str2);
    while(str1[i]!='\0'){
        concat[i]=str1[i];
        i++;
        j++;
    }
    int k=0;
    while(str2[k]!='\0'){
        concat[j]=str2[k];
        j++;
        k++;
    }
    for(int z=0;z<i+k;z++){
        cout<<concat[z];
    }

    
}