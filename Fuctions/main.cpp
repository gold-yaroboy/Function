#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//Function
int Sum(int a, int b); //Прототип
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "hi functions" << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	cout << a << " + " << b << " = " << Sum(a, b)/*Вызов*/ << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
}

int Sum(int a, int b) //Реализация
{
	return a + b;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}