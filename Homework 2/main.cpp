//������������ ������: ���� ������ � ����������
//������ � ��������������� ������� � ����� �����

#include<iostream>
using namespace std;

//#define TASK_1
float chislo;
int celoe;
float ostatok;
int kopeika;

//#define TASK_2
float cost_tetr;
float cost_pencil;
int kol_tetr;
int kol_pencil;
float sum;

//#define TASK_3
float cost_obl;
int complect;

//#define TASK_4
float dist;
float benz;
float cost;

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1

	cout << "������� ������� �����" << endl;
	cin >> chislo; //������������ ��� �����;
	celoe = chislo; // ����� ����� ����� �� �������� �����;
	ostatok = chislo - celoe; // �� ����� ����� ����� ����� � �������� �������;
	kopeika = ostatok * 100; // ������� ���. �� 100, � ��������� ����� ��������
	cout << celoe << " ���. " << kopeika << " ���.";

#endif

#if defined TASK_2

	cout << "������� ��������� ����� �������" << endl;
	cin >> cost_tetr;
	cout << "������� ���������� ��������" << endl;
	cin >> kol_tetr;
	cout << "������� ��������� ������ ���������" << endl;
	cin >> cost_pencil;
	cout << "������� ���������� ����������" << endl;
	cin >> kol_pencil;

	sum = (cost_tetr * kol_tetr + cost_pencil * kol_pencil);
	celoe = sum;
	ostatok = sum - celoe;
	kopeika = ostatok * 100;
	cout << "��������� ������� = " << celoe << " ���. " << kopeika << " ���." << endl;

#endif

#if defined TASK_3

	cout << "������� ��������� ����� �������" << endl;
	cin >> cost_tetr;
	cout << "������� ��������� ����� �������" << endl;
	cin >> cost_obl;
	cout << "������� ���������� ����������" << endl;
	cin >> complect;

	sum = ((cost_tetr + cost_obl) * complect);
	celoe = sum;
	ostatok = sum - celoe;
	kopeika = ostatok * 100;
	cout << "��������� ������� = " << celoe << " ���. " << kopeika << " ���." << endl;

#endif

#if defined TASK_4

	cout << "������� ���������� �� ���� (��)" << endl;
	cin >> dist;
	cout << "������� ������ ������� (������ �� 100 �� �������)" << endl;
	cin >> benz;
	cout << "������� ���� ����� ������� (���. ���.)" << endl;
	cin >> cost;

	sum = (dist / 100 * benz * 2 * cost); // ������� ���-�� ����� � ���� �������, ���. �� 2 (���� � �������), ���. �� ���� �� 1 ����;

	celoe = sum;
	ostatok = sum - celoe;
	kopeika = ostatok * 100;
	cout << "\n������� �� ���� � ������� ��������� � " << celoe << " ���. " << kopeika << " ���." << endl;

#endif
}