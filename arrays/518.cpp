/*write a program to merge two integer arrays display the merged array in reverse order*/
#include <iostream>
using namespace std;
int main()
{
    int size1;
    cout << "\nenter the size of integer array = ";
    cin >> size1;
    int size2;
    cout << "\nenter the size of integer array2 = ";
    cin >> size2;
    int array1[size1];
    int array2[size2];
    int larg=size1+size2;
    int merge[larg];
    for (int i = 0; i < size1; i++)
    {
        cout << "\nenter the value of array1 index["<<i<<"] = ";
        cin >> array1[i];
    }
    cout << "\n------------------------------------------------" << endl;
    for (int i = 0; i < size2; i++)
    {
         cout << "\nenter the value of array2 index["<<i<<"] = ";
        cin >> array2[i];
    }
     
    cout << "\n------------------merge----------------------" << endl;
    int i,j=0;
    for (i = 0; i < size1; i++)
    {
        merge[i] = array1[i];
        j++;
    }
    for (int i = 0; i < size2; i++)
    {
        merge[j+i] = array2[i];
    }
    cout << "-----------------print reverse order--------------" << endl;
    for (int i=larg-1;i>=0;i--){
        cout<<merge[i]<<"  ";
    }
   
}
