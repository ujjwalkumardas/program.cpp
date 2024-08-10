#include<iostream>
using namespace std;
 class student{
        public:
        string name="ujjwal kumar";
         long int no=916229;
         char grade='a';
    };
int main(){
   
    student s1;
    cout<<s1.name<<endl;
    cout<<s1.no<<endl;
    cout<<s1.grade<<endl;
    cout<<"--------------"<<endl;
    cin>>s1.name;
    cin>>s1.grade;
    cin>>s1.no;
    cout<<s1.name<<endl;
    cout<<s1.no<<endl;
    cout<<s1.grade<<endl;


}