/*write a program to transpose a 3x3 matrix. */
#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    int transpose[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter the element =";
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    cout<<"matrix  = \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<" transpose matrix  = ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           transpose[i][j]=matrix[j][i]; 
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<transpose[i][j];
        }
        cout<<endl;
    }
}