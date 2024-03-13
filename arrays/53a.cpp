/*write a program to find largest of n numbers using arrays*/
#include <iostream>
using namespace std;
int main()
{
    int array[7];
    for (int i = 0; i<7; i++)
    {
        int n;
        cout << "enter the number";
        cin >> n;
        array[i] = n;
    }
    int smallest = 0;
    int bigger;
    for (int i = 0; i<7; i++)
    {
        if (array[i] > smallest)
        {
            bigger = array[i];
            smallest = array[i];
        }
        
    }
    cout<<"largest no in array = "<<bigger;
}