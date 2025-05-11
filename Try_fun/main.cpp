#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//Function
int Factorial(int a); //Прототип
int Degree(int b, int c); //Прототип

void main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "Введите число для факториала: "; cin >> a;
	cout << "Введите пару чисел для возведения в степень: "; cin >> b >> c; cout << endl;
	cout << a << "!" << " = " << Factorial(a)/*Вызов*/ << endl;
	cout << b << " в степени " << c << " = " << Degree(b, c) << endl;
}

int Factorial(int a) //Реализация
{
	int temp = 1;
	for (int i = 1; i <= a; i++) temp *= i;
	return temp;
}
int Degree(int b, int c) //Реализация
{
	int temp = b;
	for (int i = 0; i < c; i++) temp *= b;
	return temp;
}