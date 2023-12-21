/*write a program to calculate area of circle*/
#include<iostream>
using namespace std;
int main(){
    float radious;
    cout<<"enter the radious of circle = ";
    cin>>radious;
    float area,circumference;
    area=3.14*(radious)*(radious);
    circumference=2*3.14*radious;
    cout<<"\narea of circle = "<<area<<"\n circumference of circle = "<<circumference<<"\n";
}