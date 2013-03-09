#include <QtCore/QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int CountOfNumber(int **matrix, int n, int number)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(matrix+i)+j) == number)
                count++;
        }
    }
    return count;
}
/*
void Input(int **matrix, int &n)
{
    count << "Enter n:\n";
    cin >> n;
    matrix = new int*[n];
    for (int i=0; i < n; i++)
        matrix[i] = new int[n];

    cout << "Enter massive:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << "Enter [" << i << "," << j << "] element:\n";
           cin >> *(*(matrix+i)+j);
        }
    }
}

void Output(int countOfZero, int countOfOne)
{
    cout << "Count of zero: " << countOfZero << endl;
    cout << "Count of ones: " << countOfOne << end;
}
*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   /* int **Matrix;
    int N;
    Input(Matrix, &N);
    Output(CountOfNumber(Matrix, N, 0), CountOfNumber(Matrix, N, 1));*/
    qDebug("hello");
    return a.exec();
}
