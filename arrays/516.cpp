/*write a program to implement binary search*/
//binary search only eligiable for shorted order
#include <iostream>
using namespace std;
int main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};//array
    int mid;//middle index;
    int index_frist = 0;//frist index
    int n;//searching element;
    int index_last = 7;//last index
    int check=0;//yes or no 
    cout << endl
         << "enter the data search in array = ";
          cin >>n;
    while (index_frist <= index_last)
    {
        mid = (index_frist + index_last)/2;
        if ((array[mid]) == n)
        {
            check=1;
            break;
        }
        else if (array[mid] <n)
        {
            index_frist = mid+1;
        }
        else
        {
            index_last = mid-1;
        }
    }

    if(check==1){
        cout << "'yes',data are matched";
    }else
    cout<<endl<<"data does't matched!";
}