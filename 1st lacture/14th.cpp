/*write a program to print the following pattern
1
12
123
1234
12345
----------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
