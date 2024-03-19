/*write a program to find the second largest number using an array of n numbers*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int seclargest, largest = 0;

    cout << "enter the no. of element = ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        int n;
        cout << "enter the element of index[" << i << "] = ";
        cin >> n;
        array[i] = n;
        seclargest = largest = array[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]!=largest){
            if(array[i]>seclargest){
                seclargest=array[i];
            }

        }
    }
    cout << "second largest no in a array  = " << seclargest<<endl;
    cout << "largest no in a array  = " << largest<<endl;
}