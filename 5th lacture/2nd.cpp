/*write a program to determine the character enter by the user*/
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
char ch;
cout<<"\n press any key";
cin>>ch;
if(isalpha(ch)>0){
    cout<<"\nthe user has entered a character";
}
else if (isdigit(ch)>0){
   cout<<"\nthe user has entered a digit"; 
}
else if (isprint(ch)>0){
   cout<<"\nthe user has entered a printable character"; 
}
else if(ispunct(ch)>0){
   cout<<"\nthe user has entered a punctuation mark"; 
}
else if(isspace(ch)>0){
   cout<<"\nthe user has entered a space character"; 
}



}