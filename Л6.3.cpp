#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;


int main()
{
	char line[100];

	cout << "enter your text" << endl;
	cin.getline(line, 100, '\n');


	int i = 0, linesize = 0;
	while (line[i])
	{
		i++;
		linesize++;
	}

	cout << "linesize=" << linesize << endl;



	int temp = 0;

	for (int i = 0; i < linesize; i++)
	{
		int a = line[i];
		int b = line[linesize-i-1];

		if (a == b)
		{
			temp++;
		}
	}

	cout << "temp=" << temp << endl;

	if (temp == linesize)
	{
		cout << "it's symmetrical" << endl;
	}
	else
	{
		cout << "it's not symmetrical" << endl;
	}
}