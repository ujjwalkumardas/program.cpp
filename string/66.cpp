/*write a program to compare two string  */
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[20];
    char str2[20];
    cout << "enter the frist string = ";
    gets(str1);
    cout << "enter the second string = ";
    gets(str2);
    int i, j;
    i = strlen(str1);
    j = strlen(str2);
    int check = 0;
    if (i == j)
    {
        int k = 0;
        while (str1[k] != '\0')
        {
            if (str1[k] == str2[k])
            {
                k++;
            }
            else
            {
                cout << "string 1 is not equal string 2";
                break;
            }
        }
        if (k == i)
        {
            check = 1;
        }
    }
    if (check==1){
        cout<<"string 1 is equal to string 2\n";
        puts(str1);
        cout<<" = ";
        puts(str2);
    }
   
    
}