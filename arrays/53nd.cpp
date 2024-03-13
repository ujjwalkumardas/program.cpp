#include <iostream>
using namespace std;
int main()
{
    int arr[9], f = 0;
    for (int i = 0; i < 9; i++)
    {
        int n;
        cout << "enter the no =";
        cin >> n;
        arr[i] = n;
    }
    int n;
    cout << "enter the searching element = ";
    cin >> n;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == n)
        {
            cout << "mached "
                 << "index " << i << endl;
            f = 1;
            break;
        }
    }

    if (f == 0)
        cout << "unmatched";
}