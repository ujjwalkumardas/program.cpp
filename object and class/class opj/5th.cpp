#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int no;
    public:
    void ste_name(string nam){
        name=nam;

    }
    void number(int num){
        no=num;
    }
    
    void display(){
        cout<<name;
        cout<<no;
    }
};
int main(){
    student s1;
    s1.ste_name("ujjwal kumar");
    s1.number(1245);
    s1.display();

}