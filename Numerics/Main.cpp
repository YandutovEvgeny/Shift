#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define Binary
//#define Hexadecimal
void main()
{
	setlocale(LC_ALL, "Rus");
	//dec = decimal (Десятичная система счисления)
	//bin = binary  (Двоичная система счисления)
	//hex = hexadecimal (Шестнадцатеричная система счисления)
	
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
	// , - сomma operator - позволяет в то место, где ожидается одно выражение поместить несколько операторов
	//Выводим остатки от деления в обратном порядке
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << "  ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // Binary
#ifdef Hexadecimal
	const int n = 64;
	char hex[n] = {};
	cout << "Шестнадцатеричное число будет занимать " << sizeof(hex) << " Байт памяти" << endl;
	unsigned long decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	while (decimal)
	{
		hex[i] = decimal % 16;
		if (hex[i] == 1)hex[i] = { '1' };
		if (hex[i] == 2)hex[i] = { '2' };
		if (hex[i] == 3)hex[i] = { '3' };
		if (hex[i] == 4)hex[i] = { '4' };
		if (hex[i] == 5)hex[i] = { '5' };
		if (hex[i] == 6)hex[i] = { '6' };
		if (hex[i] == 7)hex[i] = { '7' };
		if (hex[i] == 8)hex[i] = { '8' };
		if (hex[i] == 9)hex[i] = { '9' };
		if (hex[i] == 10)hex[i] = { 'A' };
		if (hex[i] == 11)hex[i] = { 'B' };
		if (hex[i] == 12)hex[i] = { 'C' };
		if (hex[i] == 13)hex[i] = { 'D' };
		if (hex[i] == 14)hex[i] = { 'E' };
		if (hex[i] == 15)hex[i] = { 'F' };

		decimal /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		cout << hex[i];
	}
	cout << endl;
#endif // Hexadecimal
	int decimal;  //Десятичное число, введённое с клавитатуры
	const int n = 8;  //Максимальная разрядность Hex числа.
	char hex[n]{};  //Этот массив будет хранить разряды Hex числа
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;  //Счётчик разряда
	for (; decimal;)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	cout << "0x";
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "C"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i];
		}*/
		/*if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);*/
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	cout << endl;
}