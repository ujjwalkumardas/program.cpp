/*in a class , thera are 10 students. each student is supposed to appear in three tests. write a program using two dimensional array to print the marks obtained by each student in diffrent subjects ,total marks and average obtained by each student , and store the average of each student in a seperate 1Darray so that it can be use to calculate the class average.*/
#include <iostream>
using namespace std;
int main()
{
    int student[10][3] = {0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            switch (j)
            {
            case 0:
                cout << "enter the marks of sub." << j << " mathematics " << i << " = ";
                cin >> student[i][j];
                break;
            case 1:
                cout << "enter the marks of sub." << j << " oops " << i << " = ";
                cin >> student[i][j];
                break;
            case 2:
                cout << "enter the marks of sub." << j << " dsa " << i << " = ";
                cin >> student[i][j];
                break;
            }
        }
        cout << endl;
    }
    /*------------------------obtained marks----------------------*/
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            switch (j)
            {
            case 0:
                cout << i + 1 << "student obtained marks in mathematics = " << student[i][j] << endl;
                break;
            case 1:
                cout << i + 1 << "student obtained marks in oops = " << student[i][j] << endl;
                break;
            case 2:
                cout << i + 1 << "student obtained marks in dsa  = " << student[i][j] << endl;
                break;
            }
        }
    }
    /*total and average marks*/
    int marks[10];
    int averages[10];
    for (int i = 0; i < 10; i++)
    {
        int mark = 0;
        int average = 0;
        for (int j = 0; j < 3; j++)

        {
            mark = mark + student[i][j];
        }
        marks[i] = mark;
        average = mark / 3;
        averages[i] = average;
    }
    cout << endl
         << "total and average marks ";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            switch (j)
            {
            case 0:
                cout << i + 1 << " mathematics = " << student[i][j] << endl;
                break;
            case 1:
                cout << i + 1 << " object orinted programming = " << student[i][j] << endl;
                break;
            case 2:
                cout << i + 1 << " data structure and algorithm  = " << student[i][j] << endl;
                break;
            }
        }
        cout<<"total marks = "<<marks[i]<<"----------- average marks = "<<averages[i]<<endl<<endl;
    }
}
