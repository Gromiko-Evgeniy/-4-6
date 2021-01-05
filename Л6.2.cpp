//9 вариант. 2 индивидуальное
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	char text[1000];

	cout << "Enter your text (symbols < 1000):" << endl;
	cin.getline(text, 1000, '\n');

	int textsize = strlen(text);

	cout << "textsize=" << textsize << endl;;

	int vowels = 0;    // гласнные
	int cosonants = 0;    //согласные

	char a;

	for (int i = 0; i < textsize ; i++)
	{
		a = text[i];

		if (a == 'E' || a == 'e' || a == 'Y' || a == 'y' || a == 'U' || a == 'u' )
		{
			vowels++;
		}


		if (a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'A' || a == 'a')
		{
			vowels++;
		}


		if (a == 'Q' || a == 'q' || a == 'W' || a == 'w' || a == 'R' || a == 'r' || a == 'T' || a == 't')
		{
			cosonants++;
		}

		if (a == 'P' || a == 'p' || a == 'S' || a == 's' || a == 'D' || a == 'd' || a == 'F' || a == 'f')
		{
			cosonants++;
		}

		if (a == 'G' || a == 'g' || a == 'H' || a == 'h' || a == 'J' || a == 'j' || a == 'K' || a == 'k')
		{
			cosonants++;
		}

		if (a == 'L' || a == 'l' || a == 'Z' || a == 'z' || a == 'X' || a == 'x' || a == 'C' || a == 'c')
		{
			cosonants++;
		}

		if (a == 'V' || a == 'v' || a == 'B' || a == 'b' || a == 'N' || a == 'n' || a == 'M' || a == 'm')
		{
			cosonants++;
		}

		
	}

	cout << "vowels=" << vowels << endl;
	cout << "cosonants=" << cosonants << endl;

	if (vowels < cosonants)
	{
		cout << "vowels < cosonants";
	}
	if (vowels == cosonants)
	{
		cout << "vowels = cosonants";
	}
	if (vowels > cosonants)
	{
		cout << "vowels > cosonants";
	}
}
