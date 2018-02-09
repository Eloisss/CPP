#include <iostream>
using namespace std;

int main() {
	
	int n;
	int c[4];
	string s[3][3];
	s[0][0]="тысяча";
	s[0][1]="тысячи"; 
	s[0][2]="тысяч";
	s[1][0]="миллион"; 
	s[1][1]="миллиона"; 
	s[1][2]="миллионов";
	s[2][0]="миллиард";
	s[2][1]="миллиарда";
	s[2][2]="миллиардов";
	s[3][0]='';
	
	cout<<"vvedite chislo do 1 000 000 000"<<endl;
	cin>>n>>endl;
	c[3]=n%1000;
	c[0]=(n%1000000)/1000;
	c[1]=(n%1000000000)/1000000;
	c[2]=(n%1000000000);
	
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
	else {	
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
}
