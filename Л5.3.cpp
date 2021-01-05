#include <iostream>
#include<iomanip>
using namespace std;

void createArray(int**, int, int);
void counting(int**, int, int);


int main()
{
    int m, n;
    cout << "enter a isze of array (N*M)" << endl;
    cin >> m >> n;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    createArray(arr, m, n);
    counting(arr, m, n);
}







void createArray(int** arr, int m, int n) {
    cout << "enter your array" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl << "your array: " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
}






void counting(int** arr, int m, int n) {
    int s = 0;
    int* mass = new int[s];

    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j < n; j += 2)
        {
            if (arr[i][j] % 2 == 0)
            {
                mass[s] = arr[i][j];
                s++;
            }
        }
    }


    cout << "your array of chetn numbers: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << mass[i] << " ";
    }

    float res = 0;
    for (int i = 0; i < s; i++)
    {
        res += mass[i];
    }
    res /= s;
    cout << endl << endl << "average vaalue = " << res;
}