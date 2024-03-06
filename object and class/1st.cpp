/*write a program to calculate area of rectangle*/
#include<iostream>
using namespace std;
class area{
private:
float length;
float breadth;
public:
void data(int a,int b){
    length=a;
    breadth=b;
}
int display(){
cout<<"area of rectangle = "<<length*breadth<<endl;
}
};
int main(){
    area b;
    b.data(5.50,2);
    b.display();
    area a;
    a.data(58,47);
    a.display();
}
