#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	int min;
	cout << "enter a size of your array (N x N)" << endl;
	cin >> n;





	//Создание, ввод и вывод массива******************************

	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {

		arr[i] = new int[n];
	}


	cout << "enter your array" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Логика****************************************

	int numOfLine, numOfCol;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (i == 0 && j == 0) {
				if (arr[i][j] <= arr[i][j + 1])
				{
					min = arr[i][j];
					numOfLine = i;
					numOfCol = j;
				}
				else {
					min = arr[i][j + 1];
					numOfLine = i;
					numOfCol = j;
				}
			}
			else {
				if (min > arr[i][j])
				{
					min = arr[i][j];
					numOfLine = i;
					numOfCol = j;
				}
			}
		}
	}

	cout << endl;
	cout << min << " " << numOfLine << " " << numOfCol;

	cout << "your new matrica:" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1)
			{
				cout << setw(3) << arr[i][j] << setw(3) << arr[i][numOfCol];
			}
			else {
				cout << setw(3) << arr[i][j];
			}
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << arr[numOfLine][i];
	}


	//Очистка массива********************************
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	return 0;
}