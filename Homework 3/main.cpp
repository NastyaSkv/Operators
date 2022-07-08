//поменять местами две переменные
#include<iostream>
using namespace std;
int digit1;
int digit2;
int empt;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите первое число: "; cin >> digit1;
	cout << "Введите второе число: "; cin >> digit2;
	empt = digit1;
	digit1 = digit2;
	digit2 = empt;

	cout << "\nТеперь первое число = " << digit1 << endl << "А второе число = " << digit2 << endl;
}