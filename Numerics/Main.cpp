#include<iostream>
using namespace std;

//#define Binary
#define Hexademical
void main()
{
	setlocale(LC_ALL, "Rus");
	//dec = decimal (���������� ������� ���������)
	//bin = binary  (�������� ������� ���������)
	//hex = hexademical (����������������� ������� ���������)
	
#ifdef Binary
	const int n = 64;  //������������ ����������� ��������� �����
	bool bin[n] = {};   //���� ������ ����� ������� ������� ��������� �����
	cout << "�������� ����� ����� �������� " << sizeof(bin) << " ���� ������" << endl;
	unsigned long long int decimal;       //�������� �����, �������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	/*while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;           //��������� �� ��������� ������� �������
	}*/
	for (; decimal; decimal /= 2/*, i++*/)bin[i++] = decimal % 2;
	// , - �omma operator - ��������� � �� �����, ������������ ���� ��������� ��������� ��������� ����������
	//������� ������� �� ������� � �������� �������
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << "  ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // Binary
	const int n = 64;
	char hex[n] = {};

	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	while (decimal)
	{
		hex[i] = decimal % 16;
		
		/*if (hex[i] == 10)hex[i] = { 'A' };
		if (hex[i] == 11)hex[i] = { 'B' };
		if (hex[i] == 12)hex[i] = { 'C' };
		if (hex[i] == 13)hex[i] = { 'D' };
		if (hex[i] == 14)hex[i] = { 'E' };
		if (hex[i] == 15)hex[i] = { 'F' };*/
		switch (hex[i] >= 10)
		{
		case 10: hex[i] = { 'A' }; break;
		case 11: hex[i] = { 'B' }; break;
		case 12: hex[i] = { 'c' }; break;
		case 13: hex[i] = { 'D' }; break;
		case 14: hex[i] = { 'E' }; break;
		case 15: hex[i] = { 'F' }; break;
		default: hex[i];
		}
		decimal /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		cout << hex[i];
	}
	cout << endl;
}