//Практическая работа: типы данных и переменные
//задачи с преобразованием дробных и целых чисел

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

	cout << "Введите дробное число" << endl;
	cin >> chislo; //пользователь ввёл число;
	celoe = chislo; // взяли целую часть от введёного числа;
	ostatok = chislo - celoe; // из числа вычли целую часть и получили остаток;
	kopeika = ostatok * 100; // остаток умн. на 100, а остальную часть откинули
	cout << celoe << " руб. " << kopeika << " коп.";

#endif

#if defined TASK_2

	cout << "Введите стоимость одной тетради" << endl;
	cin >> cost_tetr;
	cout << "Введите количество тетрадей" << endl;
	cin >> kol_tetr;
	cout << "Введите стоимость одного карандаша" << endl;
	cin >> cost_pencil;
	cout << "Введите количество карандашей" << endl;
	cin >> kol_pencil;

	sum = (cost_tetr * kol_tetr + cost_pencil * kol_pencil);
	celoe = sum;
	ostatok = sum - celoe;
	kopeika = ostatok * 100;
	cout << "Стоимость покупки = " << celoe << " руб. " << kopeika << " коп." << endl;

#endif

#if defined TASK_3

	cout << "Введите стоимость одной тетради" << endl;
	cin >> cost_tetr;
	cout << "Введите стоимость одной обложки" << endl;
	cin >> cost_obl;
	cout << "Введите количество комплектов" << endl;
	cin >> complect;

	sum = ((cost_tetr + cost_obl) * complect);
	celoe = sum;
	ostatok = sum - celoe;
	kopeika = ostatok * 100;
	cout << "Стоимость покупки = " << celoe << " руб. " << kopeika << " коп." << endl;

#endif

#if defined TASK_4

	cout << "Введите расстояние до дачи (км)" << endl;
	cin >> dist;
	cout << "Введите расход бензина (литров на 100 км пробега)" << endl;
	cin >> benz;
	cout << "Введите цену литра бензина (руб. коп.)" << endl;
	cin >> cost;

	sum = (dist / 100 * benz * 2 * cost); // считаем кол-во бенза в одну сторону, умн. на 2 (туда и обратно), умн. на цену за 1 литр;

	celoe = sum;
	ostatok = sum - celoe;
	kopeika = ostatok * 100;
	cout << "\nПоездка на дачу и обратно обойдется в " << celoe << " руб. " << kopeika << " коп." << endl;

#endif
}