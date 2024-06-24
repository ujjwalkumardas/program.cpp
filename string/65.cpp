/*write a program to append a string to another string */
#include <iostream>
using namespace std;
int main()
{

    char source[20];
    char appending[40];
    cout << "enter source  string = ";
    gets(source);
    cout << "enter destination string = ";
    gets(appending);
    int i = 0;
    int j = 0;
    while (appending[i] != '\0')
    {
        i++;
    }
    while(source[j]!='\0'){
        appending[i]=source[j];
        i++;
        j++;
    }
    for(int k=0;k<i;k++){
        cout<<appending[k];
    }
}