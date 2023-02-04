#include <iostream>
using namespace std;
#define LeftShift
//#define RigthShift
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#ifdef LeftShift
	int shift;
	cout << "На какое количество хотите сдвинуть массив влево? Введите число: ";
	cin >> shift;
	int x = arr[0];
	for (int i = 0; i < n; i++)
	{
		
		if (i >= n - shift)
		{
			arr[i] = x;
			x += 1;
			continue;
		}
		arr[i] = arr[i + shift];
		
	}
	
	for (int i =0; i < n; i++)
	{
		
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // LeftShift
#ifdef RigthShift

	int shift;
	cout << "На какое количество хотите сдвинуть массив вправо? Введите число: ";
	cin >> shift;
	int x = arr[n];
	for (int i = n; i >= 0; i--)
	{

		if (i <= shift)
		{
			arr[i] = x;
			x -= 1;
			continue;
		}
		arr[i + shift] = arr[i];

	}

	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // RigthShift
}