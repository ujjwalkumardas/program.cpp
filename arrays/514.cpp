/*write a program to merge two sorted arrays*/
#include <iostream>
using namespace std;
int main()
{
    int array1[5];
    int array2[7];
    int mer_arr[12];

    for (int i = 0; i < 5; i++)
    {

        cout << "enter the value of index x[" << i << "] = ";
        cin >> array1[i];
    }
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "enter the value of index x2[" << i << "] = ";
        cin >> array2[i];
    }
    cout << "----------------------------------------------------" << endl;
    // frist arrayis shorted
    for (int i = 0; i < 5; i++)
    {
        int frist1 = i;
        for (int j = i; j < 5; j++)
        {
            if (array1[i] > array1[j])
            {
                swap(array1[j], array1[i]);
                frist1 = j;
            }
        }
    }
    // second array shorted
    for (int i = 0; i < 7; i++)
    {
        int frist2 = i;
        for (int j = i; j < 7; j++)
        {
            if (array2[i] > array2[j])
            {
                swap(array2[j], array2[i]);

                frist2 = j;
            }
        }
    }
    // 1st and 2nd array is stored in array 3rd

    // 1st array
    for (int i = 0; i < 5; i++)
    {
        mer_arr[i] = array1[i];
    }

    // 2nd array

    for (int j = 0; j < 7; j++)
    {
        mer_arr[j + 5] = array2[j];
    }

    /*printing the array*/
    cout << "print array" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << mer_arr[i] << " , ";
    }
    
}
