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
	cout << "������� �������� �������: "; 
	
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	//����� ������� �� �����;
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << "\t";
	}
	cout << endl;
	for (int i = n-1; i>=0; i--)//����� � �������� ������������������
	{
		cout << ar[i] << "\t";
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) //����� ����� ��������� �������
	{
		
			s += ar[i];
	}
	cout << "����� ��������� �������: " << s << endl << "������� �������������� ��������� �������: " << s / n << endl;
	int max = ar[0];
	int min = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (min > ar[i])
			min = ar[i];

		if (max < ar[i])
			max = ar[i];
	}
	cout << "����������� ��������: " << min << endl;
	cout << "������������ ��������: " << max << endl;
}