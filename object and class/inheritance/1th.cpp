/*single inheritance*/
#include <iostream>
using namespace std;
class student
{
public:
    int rollno;

protected:
    string name;

public:
    void getrol(string name)
    {
        cout << "enter the rollno =";
        cin >> rollno;
        this->name = name;
    }

};
class result : public student
{

public:
    int mark[3];

    void getdata();
    int total();
    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"rollno = "<<rollno<<endl;
        cout << "total marks = " << total();
    }
};
void result::getdata()
{
    for (int i = 0; i < 3; i++)
    {
        cout << endl<<"enter the subject marks" << i << "=";
        cin >> mark[i];
    }
};
int result ::total()
{
    int tota;
    tota = mark[0] + mark[1] + mark[2];
    return tota;
}
int main()
{
    result r;
    r.getrol("ujjwal kumar");
    r.getdata();

    r.total();
    r.display();
}