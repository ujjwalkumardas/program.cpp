/*write a program to insert in an array that is already shorted in an array*/
#include <iostream>
using namespace std;
int main()
{
    int array[10];
    
    int num;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the element in an array[" << i << "] = ";
        cin >> num;
        array[i] = num;
    }

    int number;
    cout << "enter the enement shorted element is stored = ";
    cin >> number;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > number)
        {
            for (int j = 10 - 1; j >= i; j--)
            {
                array[j + 1] = array[j];
            }
            array[i] = number;
            break;
        }
    }
    for(int i=0;i<10;i++){
    cout<<" , "<<array[i];}
}