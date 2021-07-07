#include<iostream>
using namespace std;

#define tab "\t"

#define Shift_To_Left
#define Shift_To_Right

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	char direction; //����������� ������
	cout << "�������� ����������� (l - left, r - right): "; cin >> direction;
	if (direction == 'r')number_of_shifts = n - number_of_shifts;
	//����� ������� �����:
#ifdef Shift_To_Left
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = buffer;
	}

	//����� ���������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // Shift_To_Left

#ifdef Shift_To_Right
	//����� ������� ������:
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	//����� ���������� ������� �� �����:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}*/
#endif // Shift_To_Right

}