// constructor 
#include <iostream>
using namespace std;
class student
{

    string name;
    int rollno;
    int mark;
    char grade;
    // default constructor
public:
    student()
    {
        cout << "my  object is created";
    }
    // parameterised constructor
    student(string nam, int rolno, int marks, char grd)
    {
        name = nam;
        rollno = rolno;
        mark = marks;
        grade = grd;
    }
    // this pointer
    student(string name, int rollno, int mark)
    {
        this->name = name;
        this->mark = mark;
        this->rollno = rollno;
        this->grade = 'a';
    }
    // inline constructor
    inline student(string a, int b) : name(a), rollno(b)
    {
    }
    // copy constructor
    student (student &s){
        name = s.name;
        rollno = s.rollno;
        mark = s.mark;
        grade = s.grade;

    }

    void display()
    {
        cout << "\n"
             << name << "\n";
        cout << mark << "\n";
        cout << rollno << "\n";
        cout << grade << "\n";
    }
};
int main()
{
    student s1;
    student s2("ujjwal kumar", 45, 88, 'a');
    student s3("dinkar kumar", 48, 47);
    student s4("ujjwal kumar", 45);
    student s5(s4);
    student s6(s2);


    s4.display();
    s2.display();
    s3.display();
    s5.display();
    s6.display();
}