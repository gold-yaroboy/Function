#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//Function
int Factorial(int a); //��������
int Degree(int b, int c); //��������

void main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "������� ����� ��� ����������: "; cin >> a;
	cout << "������� ���� ����� ��� ���������� � �������: "; cin >> b >> c; cout << endl;
	cout << a << "!" << " = " << Factorial(a)/*�����*/ << endl;
	cout << b << " � ������� " << c << " = " << Degree(b, c) << endl;
}

int Factorial(int a) //����������
{
	int temp = 1;
	for (int i = 1; i <= a; i++) temp *= i;
	return temp;
}
int Degree(int b, int c) //����������
{
	int temp = b;
	for (int i = 0; i < c; i++) temp *= b;
	return temp;
}