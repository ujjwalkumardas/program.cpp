/*write a program to multiply two mxn matrices*/
#include <iostream>
using namespace std;
int main()
{
    int matrix1[3][3] = {0};
    int matrix2[3][3] = {0};
    cout << "enter the data of frist matrix\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter the enement = ";
            cin >> matrix1[i][j];
        }
    }
    cout << "\nenter the data of second matrix \n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter the enement = ";
            cin >> matrix2[i][j];
        }
    }

    int mulmatrix[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        for (int k = 0; k < 3; k++)
        {
            int sum = 0;
            for (j = 0; j < 3; j++)
            {
                sum = sum + matrix1[i][j] * matrix2[j][k];
            }
            mulmatrix[i][k] = sum;
        }
    }
    cout << "--------- matrix 1 -------------\n"
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------- matrix 2 -------------\n"
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------- multiple matrix -------------\n"
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mulmatrix[j][i] << " ";
        }
        cout << endl;
    }
}
