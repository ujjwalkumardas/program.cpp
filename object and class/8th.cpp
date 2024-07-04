//pointer object
#include<iostream>
using namespace std;
class student {
    public:
    int a=12;
    string name="ujjwal kumar";
    char grade='a';
    int rollno=515484;
};
int main(){
    student *s1=new student;
    (*s1).a=12;
    cout<<s1->name<<endl;
    cout<<(*s1).a<<endl;
    cout<<s1->grade<<endl;
    cout<<s1->rollno;
}
