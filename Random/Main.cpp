#include<iostream>
#include<stdlib.h> // <- В этом файле содержаться функции rand() и srand()
#include<time.h>   // <- В этом файле содержится функция time()
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	
	const int n = 5;
	int arr[n];
	//rand();  //Возвращает псевдослучайные числа в диапазоне от 0 до 32 767 (MAX_RAND)
	int Max_Number;
	int Min_Number;
	cout << "Введите максимально возможное число: "; cin >> Max_Number; 
	cout << "Введите минимально возможное число: "; cin >> Min_Number;  
	//srand(time(NULL));
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (Max_Number - Min_Number) + Min_Number ;
	}
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	int buffer;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
	cout << "Вывод отсортированного массива" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}