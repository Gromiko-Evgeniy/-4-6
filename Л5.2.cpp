
#include <iostream>
#include<math.h>
using namespace std;


float func(float* arr, int, int, float);



int main()
{
	int n;
	cout << "enter a size of array" << endl;
	cin >> n;

	if (n < 3)
		cout << "enter a correct size >=3 " << endl;
	else {
		float* arr = new float[n];

		cout << "enter your array" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		cout << "your array :" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}


		cout << endl << endl << "your result = " << func(arr, n, 0, 1) << endl;
	}
}



float func(float* arr, int n, int j, float res) {



	if (j < n / 3)
	{
		res *= sin(arr[j]) - cos(arr[j]);
		j++;
		return func(arr, n, j, res);
	}

	if (j >= n / 3 && j <= 2 * (n / 3))
	{
		res *= sin(arr[j]) - cos(arr[j]);
		j++;
		return func(arr, n, j, res);
	}
	if (j > 2 * (n / 3))
		return res;
}