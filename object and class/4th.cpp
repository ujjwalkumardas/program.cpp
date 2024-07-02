#include<iostream>
using namespace std;

    class student {
        public:
        string name ;
        int age,roll_no;
      char grad;

    };
    int main(){
        student s1;
        s1.name="ujjwal kumar";
        s1.age=12;
        s1.roll_no=45;
        s1.grad='a';
        cout<<s1.name<<endl<<s1.age<<endl<<s1.roll_no<<endl<<s1.grad;
        //2nd student 
        cout<<endl<<"student 2"<<endl;
        student s2;
        s2.name="dinkar kumar";
        s2.age=18;
        s2.grad='b';
        s2.roll_no=47;
        cout<<s2.name<<endl<<s2.age<<endl<<s2.roll_no<<endl<<s2.grad;


    }
