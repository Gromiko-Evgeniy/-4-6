#include "counting.h"




void counting()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "enter a size of array" << endl;
    cin >> n;

    float** arr = new float* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new float[n];
    }

    //Заполнение массива**************
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 <= 5 && i + 1 < n && j + 1 < n)
                arr[i][j] = 2 * (i + 1) * (j + 1) * (j + 1) - 2 * (j + 1);
            else
                arr[i][j] = 3 * (i + 1) * (j + 1) - 3;
        }
    }



    //Вывод массива ******************

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << arr[i][j];
        }
        cout << endl << endl;
    }


    int sum1 = 0;
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 0; j < n; j++)
        {
            sum1 += arr[i][j];
        }
    }

    cout << "Сумма элементов четных строк матрицы А = " << sum1 << endl << endl;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j += 2)
        {
            sum2 += arr[i][j];
        }
    }
    cout << "Сумма элементов нечетных столбцов матрицы А = " << sum2 << endl << endl;

    cout << "транспонированная матрица В: " << endl << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << arr[j][i];
        }
        cout << endl << endl;
    }


    cout << "Сумма элементов нечетных строк матрицы А = " << sum2 << endl << endl;

    cout << "Сумма элементов четных столбцов матрицы А = " << sum1 << endl << endl;
}
