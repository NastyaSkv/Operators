//�������� ������� ��� ����������
#include<iostream>
using namespace std;
int digit1;
int digit2;
int empt;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ������ �����: "; cin >> digit1;
	cout << "������� ������ �����: "; cin >> digit2;
	empt = digit1;
	digit1 = digit2;
	digit2 = empt;

	cout << "\n������ ������ ����� = " << digit1 << endl << "� ������ ����� = " << digit2 << endl;
}