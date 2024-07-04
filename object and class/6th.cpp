#include <iostream>
using namespace std;
class user
{
    public:
    string user_name;
    long long int regestration;
    string dep;
    int rollno;

public:
    void user_nam(string name)
    {
        
        user_name = name;
    }
    void reg(int reg)
    {
        regestration=reg;
    }
    void department(string department)
    {
        if (department == "cse" || department == "ee" || department == "civil" || department == "aiml")
        {
            dep = department;
        }
        else
        {
            cout << "invalid department";
        }
    }
    void roll(int digit)
    {
        if (0<= digit ||digit<=99)
        {
            rollno = digit;
        }
        else
        {
            cout << "invalid rollno";
        }
    }
    void display()
    {
        cout << user_name;
        cout << regestration;
        cout << dep;
        cout << rollno;
    }
};
int main()
{
    user s1;
    s1.user_nam("ujjwalkumar");
    s1.reg(4845);
    s1.roll(01);
    s1.department("mm");
    cout<<s1.user_name;
    cout<<s1.rollno;
    cout<<s1.dep;
    cout<<s1.regestration;
}