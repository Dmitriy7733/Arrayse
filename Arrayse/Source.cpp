#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int ar[n] = { 3, 5, 8 };
	//arr[2] = 1024;
	//cout << arr[2] << endl;

	//cin >> arr[i];
	cout << "Введите элементы массива: "; 
	
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	//Вывод массива на экран;
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << "\t";
	}
	cout << endl;
	for (int i = n-1; i>=0; i--)//вывод в обратной последовательности
	{
		cout << ar[i] << "\t";
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) //вывод суммы элементов массива
	{
		
			s += ar[i];
	}
	cout << "Сумма элементов массива: " << s << endl << "Среднее арифметическое элементов массива: " << s / n << endl;
	int max = ar[0];
	int min = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (min > ar[i])
			min = ar[i];

		if (max < ar[i])
			max = ar[i];
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;
}