#include <string>
#include "stdafx.h"
#include <iostream>
using namespace std;

const string Sotn[10] = { " ","сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "cемьсот", "восемьсот", "девятьсот" };
const string Decn[10] = { " ", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "cемьдесят", "восемьдесят", "девяносто" };
const string Edn[20] = { " ", "один", "два", "три", "четыре", "пять", "шесть", "cемь", "восемь", "девять", "десять", "одиннадцать", "двенадцать","тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "cемнадцать", "восемнадцать", "девятнадцать" };

string stroka(int x)
{
	int ed = x % 10;
	int dec = x / 10 % 10;
	int sot = x / 100;

	string sSot = Sotn[sot];
	string sDec = Decn[dec];
	if (dec == 1)
	{
		ed += 10;
	}
	string sEd = Edn[ed];

	return sSot + " " + sDec + " " + sEd;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	//

	long long int n;
	int c[4];
	string s[4][3] = { { " ", " ", " " },{ "тысяча", "тысячи", "тысяч" },{ "миллион", "миллиона", "миллионов" },{ "миллиард", "миллиарда", "миллиардов" } };


	cout << "vvedite chislo do 1 000 000" << endl;

	cin >> n;

	long long int k = 1;
	for (int i = 0; i<4; i++)
	{
		c[i] = n / k % 1000;
		k = k * 1000;
	}

	cout << n << " = " << endl;

	if (n == 0)
	{
		cout << "ноль" << endl;
	}

	for (int i = 3; i >= 0; i--)
	{
		int x = c[i];
		if (x == 0)
		{
			continue;
		}
		int e = x % 10;
		int d = x / 10 % 10;
		int okonchanie;

		if (e == 1 && d != 1)
		{
			okonchanie = 0;
		}

		else if (1 < e && e < 5 && d != 1)
		{
			okonchanie = 1;
		}
		else
		{
			okonchanie = 2;
		}
		cout << stroka(x) << ' ' << s[i][okonchanie] << ' ';
	}
}

/*
Поддержать отрицательные числа, чтобы писалось слово "минус" 
Поддержать числа до 10^18
*поддержать числа до дециллиона (10^33)
https://ru.wikipedia.org/wiki/%D0%98%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D0%B5_%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F_%D1%81%D1%82%D0%B5%D0%BF%D0%B5%D0%BD%D0%B5%D0%B9_%D1%82%D1%8B%D1%81%D1%8F%D1%87%D0%B8
тренарные операторы
Сделать так, чтобы число можно было задавать параметром командной строки
сделать константные массивы 
прочитать про юнит тесты и сделать функцию для юнит тестов*
*/
