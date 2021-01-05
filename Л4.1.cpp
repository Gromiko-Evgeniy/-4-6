
#include <iostream>
using namespace std;
int main()
{
	const int K = 10;
	int arr[K], arr1[K], arr2[K];
	int a = 0, b = 0;
	cout << "enter your array" << endl;
	for (int i = 0; i < K; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < K; i++)
	{
		if (arr[i] < 0) {
			arr1[a] = arr[i];
			a++;

		}
		else {
			arr2[b] = arr[i];
			b++;
		}
	}




	if (a > 0)
	{
		cout << "array < 0 : " << endl;
		for (int i = 0; i < a; i++)
		{
			cout << arr1[i] << " ";
		}
	}


	if (b > 0)
	{
		cout << endl << "array >= 0 : " << endl;
		for (int i = 0; i < a; i++)
		{
			cout << arr2[i] << " ";
		}
	}

	return 0;
}