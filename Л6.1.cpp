////11 вариант. 1 индивидуальное
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
	char line[100];

	cout << "Enter nambers separated by a space ending whith spase (symbols < 100):" << endl;
	cin.getline(line, 100, '\n');

	int linesize = strlen(line); // количество символов массива 

	cout << "your line size=: "<< linesize << endl;

	cout << "your line: ";
	for (int i = 0; i < linesize; i++)
	{
		cout << line[i];
	}

	cout << endl;

	int arrsize = 0;

	for (int i = 0; i < linesize; i++)
	{
		if (line[i] == ' ')
		{
			arrsize++;
		}
	}
	arrsize;
	cout << "arrsize=" << arrsize << endl; //количество чисел в массиве

	
	int* arr = new int[arrsize];


	int	elnum = 0; // номер элемента массива чисел
	

	for (int i = 0; i < linesize-1;)
	{
	
		if (line[i] == ' ')
		{
			i++;
			elnum++;
		}
		
		else
		{
			
			int n = 0; 

			int number = 0;   //число массива

			while (line[i] != ' ')
			{
				
				
				int numeral = line[i] - '0';//цифра 

				number = number + numeral * pow(10, 8-n);//все число с лишнми нулями 
					
				
				cout << "numeral=" << numeral << endl;
				 i++;
				 n++;
				
			}
			
			cout << "number with '0' =" << number << endl;
			int j = 10;
			while (number % j == 0) // обрезает лишние нули
			{
				number = number / j;
				
			}
			cout << "number without '0'=" << number << endl;
			
			arr[elnum] = number;
		}

	}

	cout << "arr= ";
	for (int i = 0; i < arrsize; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	int temp;

	for (int j = 0; j < arrsize-1; j++)
	{
		for (int i = 0; i < arrsize - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		
	}

	cout << "new arr= ";
	for (int i = 0; i < arrsize; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}


















