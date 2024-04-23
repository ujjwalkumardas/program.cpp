/*write a program to implement linear search in any given array*/
#include <iostream>
using namespace std;
int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "enter the value of index [" << i << "] = ";

        cin >> array[i];
    }
    cout << "------------------------------------------------" << endl;
    cout << "enter the data searching in the array = ";
    int n;
    cin >> n;
    int check = 0;

    for (int i = 0; i < 10; i++)
    {
        if (n == array[i])
        {
            check = 1;
            break;
        }
    }
    if (check == 1)
    {
        cout << endl
             << "'yes',data is present in array";
    }
    else
    {
        cout << endl
             << "data is not present in array";
    }
}