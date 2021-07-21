#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8; //Кол-во строк
	const int COLS = 5; //Кол-во элементов строки (столбиков)
	int arr[ROWS][COLS]{};
	/*{
		{},
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//Счётчик i нумерует строки
			//Счётчик j нумерует столбики
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}*/

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (100 - 10) + 10;
		}
		
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
	
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма всех элементов: " << sum << endl;
	cout << "Среднее арифметическое всех элементов: " << (float)sum / (ROWS * COLS) << endl;
	cout << endl;
	
	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
			if (arr[i][j] < min)min = arr[i][j];
			
		}	
	}
	cout << "Максимальное значение в массиве: " << max << endl;
	cout << "Минимальное значение в массиве: " << min << endl;

	
 }