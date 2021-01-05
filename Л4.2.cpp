#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int N = 4, M = 6;
	float arr[N][M];
	float max;

	cout << "enter your array" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "your array :" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}




	if (N <= M)
	{
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (j < N - i - 1)
				{
					if (j == 0 && i == 0)
					{
						if (arr[i][j] > arr[i][j + 1] && (j + 1) < (N - 1))
						{
							max = arr[i][j];
						}
						else
						{
							max = arr[i][j + 1];
						}
					}
					else
					{
						if (max < arr[i][j])
						{
							max = arr[i][j];
						}
					}
				}
			}
		}
	}



	else
	{
		int a = M - 1;
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (i < N - M)
				{
					if (i == 0 && j == 0)
					{
						if (arr[i][j] > arr[i][j + 1]) {
							max = arr[i][j];
						}
						else {
							max = arr[i][j + 1];
						}
					}
					else
					{
						if (max <= arr[i][j])
						{
							max = arr[i][j];
						}
					}
				}
				else
				{
					if (j < M - i + 1)
					{
						if (max < arr[i][j])
						{
							max = arr[i][j];
						}
					}
				}
			}
			if (i >= N - M)
				a++;
		}
	}
	cout << "max number = " << max << endl;
	return 0;
}