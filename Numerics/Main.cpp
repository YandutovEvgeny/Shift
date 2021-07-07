#include<iostream>
using namespace std;

//#define Binary
#define Hexademical
void main()
{
	setlocale(LC_ALL, "Rus");
	//dec = decimal (Десятичная система счисления)
	//bin = binary  (Двоичная система счисления)
	//hex = hexademical (Шестнадцатеричная система счисления)
	
#ifdef Binary
	const int n = 64;  //Максимальная разрядность двоичного числа
	bool bin[n] = {};   //Этот массив будет хранить разряды двоичного числа
	cout << "Двоичное число будет занимать " << sizeof(bin) << " Байт памяти" << endl;
	unsigned long long int decimal;       //Двоичное число, введённое с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	/*while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;           //переходим на следующий элемент массива
	}*/
	for (; decimal; decimal /= 2/*, i++*/)bin[i++] = decimal % 2;
	// , - сomma operator - позволяет в то место, гдеожидается одно выражение поместить несколько операторов
	//Выводим остатки от деления в обратном порядке
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
	cout << "Введите десятичное число: "; cin >> decimal;
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