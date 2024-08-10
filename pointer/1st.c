#include<stdio.h>
void fun1(char *s1,char *s2){
char *temp=s1;
s1=s2;
s2=temp;
printf("%s %s",s1, s2);
}
void fun2(char **s1,char **s2){
char *temp=*s1;
*s1=*s2;
*s2=temp;
}


int main(){
char *str1="hi",*str2="bye";
fun1(str1,str2);
printf("%s,%s",str1,str2);
fun2(&str1,&str2);
printf("%s,%s",str1,str2); 
}