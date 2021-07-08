#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	const int n = 5;
	int arr[n];
	//rand();  //Возвращает псевдослучайные числа в диапазоне от 0 до 32 767 (MAX_RAND)
	
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}