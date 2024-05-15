/*in a small company, there are five salesman. each sales man is supposed to sell 3 products.write a program using two-dimensional array to print (i)the total sales each salesman and (ii) total sales of each item */
#include<iostream>
using namespace std;
int main(){
    int employee=5;
    int sales=3;
    int array[employee][sales];
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"enter the salesman "<<i<<" and sales product term " <<j <<" = ";
            cin>>array[i][j];
        }
        cout<<endl;
    }
    cout<<"-----------------------print-------------------------"<<endl;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+array[i][j];
        }
        cout<<"total sales of "<<i<<" selesman = ";
        cout<<sum<<endl;
    }
}