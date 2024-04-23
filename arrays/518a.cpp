/*write a program to merge two integer arrays display the merged array in reverse order*/
#include <iostream>
using namespace std;
void value_array(int array[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << "enter the value of index[" << i << "] = ";
        cin >> array[i];
    }
}
void mergeing(int array1[], int m, int array[], int n, int merge_array[])
{
    int i = 0;
    for (int j = 0; j < m; j++)
    {
        merge_array[j] = array1[j];
        i++;
    }
    for (int j = 0; j < n; j++)
    {
        merge_array[i + j] = array[j];
    }
}
void reverse_array(int array[], int size)
{
    for (int i = 0, j = (size - 1); i<(size - 1) / 2, j>(size - 1) / 2; i++, j--)
    {
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
void printing(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " , ";
    }
    cout << endl;
}

int main()
{
    int array1[8];
    int array2[9];
    int m, n;
    m = sizeof(array1) / sizeof(int);
    n = sizeof(array2) / sizeof(int);
    value_array(array1, m);
    value_array(array2, n);
    int size = m + n;
    int merge_array[size];
    cout << "--------------merging-----------------" << endl;
    mergeing(array1, m, array2, n, merge_array);

    cout << "------------start_printing-------------" << endl;
    cout << "\n-----------frist_array---------------"<<endl;
    printing(array1, m);
    cout << "\n-----------second_array---------------"<<endl;
    printing(array2, n);
    cout << "\n-----------merge_array---------------"<<endl;
    printing(merge_array, size);

    reverse_array(merge_array, size);
    cout << "\n-----------reverse_merge_array---------------"<<endl;
    printing(merge_array, size);
cout<<"\n\n\n";
cout<<"---------------thanks_for_watching----------------\n\n\n";
}
