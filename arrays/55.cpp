/*write a program to find the second largest number using an array of n numbers*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int small, largest = 0;
    int po1, po2;
    int temp;
    cout << "enter the no. of element = ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        int n;
        cout << "enter the element of index[" << i << "] = ";
        cin >> n;
        array[i] = n;
        small = largest = array[0];
    }
    
}