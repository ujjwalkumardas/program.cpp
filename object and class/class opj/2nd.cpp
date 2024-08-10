/* write a program to implement student's class. the program must demonstrate the use of nested member function ,arrays within the class, and making a function defined outside the class an inline function*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student{
int rollno;
char name[20];
int marks[3];
public:
void details(char *n,int rollno,float sub1, float sub2,float sub3){
strcpy(name,n);
this->rollno=rollno;
marks[0]=sub1;
marks[1]=sub2;
marks[2]=sub3;
}
void display();
};
void student::display(){
    cout<<"reg. no ="<<rollno<<endl;
    cout<<"student name ="<<name<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"maths marks ="<<marks[0]<<endl;
    cout<<"cemistry marks ="<<marks[1]<<endl;
    cout<<"bioloogy marks ="<<marks[2]<<endl;
    cout<<"----------------------------- "<<endl;
    float x=(marks[0]+marks[1]+marks[2])/3;
    cout<<"average marks of student = "<<x;
}
int main(){
    student s1;
    s1.details("ujjwal kumar",1234,56,66,85);
    s1.display();
}