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
	do
	{
		cout << "Введите максимально возможное число: "; cin >> Max_Number;
		cout << "Введите минимально возможное число: "; cin >> Min_Number;
		if (Min_Number >= Max_Number)cout << "Будте внимательны, повторите ввод!" << endl;
	} while (Min_Number >= Max_Number);
	//srand(time(NULL));
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (Max_Number - Min_Number) + Min_Number ;
	}
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	//Сортировка массива пузырьком
	/*for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}*/
	
	//Сортировка массива выбором
	for (int i = 0; i < n; i++) //Счётчик 'i' выбирает элемент в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
	//Вывод отсортированоого массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}