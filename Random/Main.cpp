#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	const int n = 5;
	int arr[n];
	//rand();  //���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}