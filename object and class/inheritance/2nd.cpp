#include<iostream>
using namespace std;
class student {
    protected:
    string name;
    int rollno;
    public:
    int age ;
};
class result :private student{
    private:
    int math,cpp,dsa;
    public:
    result(string name,int rollno,int age){
        this->name=name;
        this->rollno=rollno;
        this->age=age;
    }
    void mark(int math,int cpp,int dsa){
        this->math=math;
        this->cpp=cpp;
        this->dsa=dsa;

    }
    void display(){
        cout<<"student name = "<<name<<endl;
        cout<<"rollno = "<<rollno<<endl;
        cout<<"age = "<<age<<endl;
        cout<<endl<<"------- marks ------"<<endl;
        cout<<"maths = "<<math<<endl;
        cout<<"cpp = "<<cpp<<endl;
        cout<<"dsa = "<<dsa<<endl;
    }

};
int main(){
    result my("ujjwal kumar",47,20);
    my.mark(56,70,60);
    my.display();
    

}