#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "enter a size of your array (N x N)" << endl;
	cin >> n;





	//Создание, ввод и вывод массива******************************

	float** arr = new float* [n];
	for (int i = 0; i < n; i++) {

		arr[i] = new float[n];
	}


	cout << "enter your array" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}

	//Логика****************************************

	float summ = 0;

	float* summOfLines = new float[n];
	float* summOfCol = new float[n];

	bool x;

	//Сумма строк***************

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			summ += arr[i][j];
		}
		summOfLines[i] = summ;
		summ = 0;
	}


	//Сумма столбцов***************

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			summ += arr[j][i];
		}
		summOfCol[i] = summ;
		summ = 0;
	}


	for (int i = 0; i < n - 1; i++)
	{
		if (summOfLines[i] == summOfLines[i + 1]) {
			x = true;
		}
		else {
			x = false;
			break;
		}
	}


	if (x) {
		for (int i = 0; i < n - 1; i++)
		{
			if (summOfCol[i] == summOfCol[i + 1]) {
				x = true;
			}
			else {
				x = false;
				break;
			}
		}
	}

	if (x)
		cout << "Данная матрица является магическим квадратом" << endl;
	else
		cout << "Данная матрица не является магическим квадратом" << endl;


	//Очистка массива********************************
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	return 0;
}