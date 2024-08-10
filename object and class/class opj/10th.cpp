// distructor 
#include <iostream>
using namespace std;
class student
{

    string name;
    int rollno;
    int *mark;
    char grade;
    
public:
    student()
    {
    name="dinkar kumar";
    rollno=12;
    mark=new int ;
    *mark=96;
    grade='a';
    }
    // parameterised constructor
    student(string nam, int rolno, int marks, char grd)
    {
        this->name = nam;
        this->rollno = rolno;
       
        grade = grd;
    }
    

    void display()
    {
        cout << "\n"
             << name << "\n";
        cout << mark << "\n";
        cout << rollno << "\n";
        cout << grade << "\n";
    }
    ~student(){

    }
};
int main()
{
    student s1;
    student s2("ujjwal kumar", 45, 88, 'a');



    s2.display();
    s1.display();

}