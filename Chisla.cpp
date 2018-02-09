#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	string st;
	c=
	cout<<"vvedite chislo do 1 000 000 000"<<endl;
	cin>>n>>endl;
	
	if (n>=10 && n<20)
	{
	switch(n){
		case 10: cout<<'десять';break;
		case 11: cout<<'одинадцать';break;
		case 12: cout<<'двенадцать';break;
		case 13: cout<<'тринадцать';break;
		case 14: cout<<'четырнадцать';break;
		case 15: cout<<'пятнадцать';break;
		case 16: cout<<'шестнадцать';break;
		case 17: cout<<'семнадцать';break;
		case 18: cout<<'восемнадцать';break;
		case 19: cout<<'девятнадцать';break; }	
	}
	else{	
	switch(n%10)
	{
		case 2: cout<<'два';break;
		case 3: cout<<'три';break;
		case 4: cout<<'четыре';break;
		case 5: cout<<'пять';break;
		case 6: cout<<'шесть';break;
		case 7: cout<<'семь';break;
		case 8: cout<<'восемь';break;
		case 9: cout<<'девять';break;
	}

	switch(n%100)
	{
		case 2: cout<<'два';break;
		case 3: cout<<'три';break;
		case 4: cout<<'четыре';break;
		case 5: cout<<'пять';break;
		case 6: cout<<'шесть';break;
		case 7: cout<<'семь';break;
		case 8: cout<<'восемь';break;
		case 9: cout<<'девять';break;
	}
	
	switch(n%1000)
	{}
	
	switch(n%10000)
	{}

	switch(n%100000)
	{}
	
	switch(n%1000000)
	{}
		
	return 0;
}
