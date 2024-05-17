/*write a program to read the marks in a two-dimensional array which stores marks of 10 students in five subjects. write a program to display the highest marks in each subject */
#include <iostream>
using namespace std;
int main()
{
    int student[10][5] = {0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            switch (j)
            {
            case 0:
                cout << "enter the marks of student (" << i + 1 << ") mathematics = ";
                cin >> student[i][j];
                break;
            case 1:
                cout << "enter the marks of student (" << i + 1 << ") oops = ";
                cin >> student[i][j];
                break;
            case 2:
                cout << "enter the marks of student (" << i + 1 << ") dsa = ";
                cin >> student[i][j];
                break;
            case 3:
                cout << "enter the marks of student (" << i + 1 << ") spoken tuotrial = ";
                cin >> student[i][j];
                break;
            case 4:
                cout << "enter the marks of student (" << i + 1 << ") aec = ";
                cin >> student[i][j];
                break;
            }
        }
        cout << endl;
    }
    /*--------------------------------------------------------*/
    int maxs[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        int max = 0;
        for (int j = 0; j < 5; j++)
        {
            if (student[i][j] > max)
            {
                max = student[i][j];
            }
        }
        maxs[i] = max;
    }
    /*---------------------------maximum mark in subject------------------------*/
    int max = 0;
    for (int i = 0; i < 10; i++)
    {

        if (maxs[i] > max)
        {
            max = maxs[i];
        }
    }
    /*----------------------average and total_marks--------------------*/
    int marks[10];
    int averages[10];
    for (int i = 0; i < 10; i++)
    {
        int mark = 0;
        int average = 0;
        for (int j = 0; j < 5; j++)

        {
            mark = mark + student[i][j];
        }
        marks[i] = mark;
        average = mark / 5;
        averages[i] = average;
    }

    //---------------------------------------
    int topper = 0;
    for (int i = 0; i < 10; i++)
    {

        if (marks[i] > topper)
        {
            topper = marks[i];
        }
    }

    /*-----------------------------------------------------------------*/

    for (int i = 0; i < 10; i++)
    {
        cout << endl
             << "********  report card  ******** " << endl;
        for (int j = 0; j < 5; j++)
        {

            switch (j)
            {
            case 0:
                cout << " (" << i + 1 << ")student's mathematics = " << student[i][j] << endl;
                break;
            case 1:
                cout << " (" << i + 1 << ")student's oops = " << student[i][j] << endl;
                break;
            case 2:
                cout << " (" << i + 1 << ")student's dsa = " << student[i][j] << endl;
                break;
            case 3:
                cout << " (" << i + 1 << ")student's spoken tuotrial = " << student[i][j] << endl;
                break;
            case 4:
                cout << " (" << i + 1 << ")student's aec = " << student[i][j] << endl;
                break;
            }
        }
        cout << "maximum mark's of (" << i + 1 << ") student =" << maxs[i] << endl;
        cout << "total marks = " << marks[i] << "                 average marks = " << averages[i] << endl;
        cout << endl;
    }
    cout << "the toppers student marks in class = " << topper;
}