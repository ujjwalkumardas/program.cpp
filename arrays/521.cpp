/*write a program to generate pascal's trangel*/
#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {0};
    int row = 2, col;
    for (int i = 0; i < 4; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    for (int i = 2; i < 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}