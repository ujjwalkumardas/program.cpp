/*write a program to interchange the largest and the smallest number int the array*/
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
    for (int i = 0; i < n; i++)
    {
        if (array[i] < small)
        {
            small = array[i];
            po1 = i;
        }
        if (array[i] > largest)
        {
            largest = array[i];
            po2 = i;
        }
    }
    cout << "smallest no in a array of index[" << po1 << "] = " << small<<endl;
    cout << "largest no in a array of index[" << po2 << "] = " << largest<<endl;

    
}