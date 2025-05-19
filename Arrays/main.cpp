#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//lesson
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 40, int maxRand = 256);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);
//home
void Sum(int arr[], const int n);
void Sum(double arr[], const int n);
void Sum(float arr[], const int n);
void Sum(char arr[], const int n);

void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(float arr[], const int n);
void Avg(char arr[], const int n);

void MinValueIn(int arr[], const int arr_size);
void MinValueIn(double arr[], const int arr_size);
void MinValueIn(float arr[], const int arr_size);
void MinValueIn(char arr[], const int arr_size);

void MaxValueIn(int arr[], const int arr_size);
void MaxValueIn(double arr[], const int arr_size);
void MaxValueIn(float arr[], const int arr_size);
void MaxValueIn(char arr[], const int arr_size);

void ShiftLeft(int arr[], const int arr_size);
void ShiftLeft(double arr[], const int arr_size);
void ShiftLeft(float arr[], const int arr_size);
void ShiftLeft(char arr[], const int arr_size);

void ShiftRight(int arr[], const int arr_size);
void ShiftRight(double arr[], const int arr_size);
void ShiftRight(float arr[], const int arr_size);
void ShiftRight(char arr[], const int arr_size);

void main()
{
	setlocale(LC_ALL, "");
	
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	//home
	Sum(arr, n);
	Avg(arr, n);
	MinValueIn(arr, n);
	MaxValueIn(arr, n);
	ShiftLeft(arr, n);
	ShiftRight(arr, n);
	cout << "--------------------" << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	//home
	Sum(brr, SIZE);
	Avg(brr, SIZE);
	MinValueIn(brr, SIZE);
	MaxValueIn(brr, SIZE);
	ShiftLeft(brr, SIZE);
	ShiftRight(brr, SIZE);
	cout << "--------------------" << endl;
	const int size = 6;
	float crr[size];
	FillRand(crr, size);
	Print(crr, size);
	Sort(crr, size);
	Print(crr, size);
	Sum(crr, size);
	Avg(crr, size);
	MinValueIn(crr, size);
	MaxValueIn(crr, size);
	ShiftLeft(crr, size);
	ShiftRight(crr, size);
	cout << "--------------------" << endl;
	const int Size = 10;
	char drr[Size];
	FillRand(drr, Size);
	Print(drr, Size);
	Sort(drr, Size);
	Print(drr, Size);
	Sum(drr, Size);
	Avg(drr, Size);
	MinValueIn(drr, Size);
	MaxValueIn(drr, Size);
	ShiftLeft(drr, Size);
	ShiftRight(drr, Size);
}
//lesson
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

//home
void Sum(int arr[], const int arr_size)
{
	int Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << Sum << endl;
}
void Sum(double arr[], const int arr_size)
{
	double Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << Sum << endl;
}
void Sum(float arr[], const int arr_size)
{
	float Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << Sum << endl;
}
void Sum(char arr[], const int arr_size)
{
	char Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << Sum << endl;
}

void Avg(int arr[], const int arr_size)
{
	int Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << (double)Sum/arr_size << endl;
}
void Avg(double arr[], const int arr_size)
{
	double Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << (double)Sum/arr_size << endl;
}
void Avg(float arr[], const int arr_size)
{
	float Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	cout << (double)Sum/arr_size << endl;
}
void Avg(char arr[], const int arr_size)
{
	char Sum = 0;
	for (int i = 0; i < arr_size; i++)Sum += arr[i];
	char Avg = (double)Sum / arr_size;
	cout << Avg << endl;
}

void MinValueIn(int arr[], const int arr_size)
{
	int min = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout <<  min << endl;
}
void MinValueIn(double arr[], const int arr_size)
{
	double min = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout <<  min << endl;
}
void MinValueIn(float arr[], const int arr_size)
{
	float min = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout <<  min << endl;
}
void MinValueIn(char arr[], const int arr_size)
{
	char min = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout <<  min << endl;
}

void MaxValueIn(int arr[], const int arr_size)
{
	int max = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout <<  max << endl;
}
void MaxValueIn(double arr[], const int arr_size)
{
	double max = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout <<  max << endl;
}
void MaxValueIn(float arr[], const int arr_size)
{
	float max = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout <<  max << endl;
}
void MaxValueIn(char arr[], const int arr_size)
{
	char max = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout <<  max << endl;
}

void ShiftLeft(int arr[], const int arr_size)
{
	int temp;
	for (int i = 0; i < arr_size; i++)
	{
		temp = arr[arr_size - 1];
		for (int i = arr_size - 1; i > 0; i--)arr[i] = arr[i - 1];
		arr[0] = temp;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
	cout << endl;
}
void ShiftLeft(double arr[], const int arr_size)
{
	double temp;
	for (int i = 0; i < arr_size; i++)
	{
		temp = arr[arr_size - 1];
		for (int i = arr_size - 1; i > 0; i--)arr[i] = arr[i - 1];
		arr[0] = temp;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
	cout << endl;
}
void ShiftLeft(float arr[], const int arr_size)
{
	float temp;
	for (int i = 0; i < arr_size; i++)
	{
		temp = arr[arr_size - 1];
		for (int i = arr_size - 1; i > 0; i--)arr[i] = arr[i - 1];
		arr[0] = temp;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
	cout << endl;
}
void ShiftLeft(char arr[], const int arr_size)
{
	char temp;
	for (int i = 0; i < arr_size; i++)
	{
		temp = arr[arr_size - 1];
		for (int i = arr_size - 1; i > 0; i--)arr[i] = arr[i - 1];
		arr[0] = temp;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
	cout << endl;
}

void ShiftRight(int arr[], const int arr_size)
{
	for (int j = 0; j < arr_size; j++)
	{
		int buf;
		buf = arr[0];
		for (int i = 1; i < arr_size; i++) arr[i - 1] = arr[i];
		arr[arr_size - 1] = buf;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
}
void ShiftRight(double arr[], const int arr_size)
{
	for (int j = 0; j < arr_size; j++)
	{
		double buf;
		buf = arr[0];
		for (int i = 1; i < arr_size; i++) arr[i - 1] = arr[i];
		arr[arr_size - 1] = buf;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
}
void ShiftRight(float arr[], const int arr_size)
{
	for (int j = 0; j < arr_size; j++)
	{
		float buf;
		buf = arr[0];
		for (int i = 1; i < arr_size; i++) arr[i - 1] = arr[i];
		arr[arr_size - 1] = buf;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
}
void ShiftRight(char arr[], const int arr_size)
{
	for (int j = 0; j < arr_size; j++)
	{
		char buf;
		buf = arr[0];
		for (int i = 1; i < arr_size; i++) arr[i - 1] = arr[i];
		arr[arr_size - 1] = buf;
		for (int i = 0; i < arr_size; i++)cout << arr[i] << "\t";
		cout << endl;
	}
}