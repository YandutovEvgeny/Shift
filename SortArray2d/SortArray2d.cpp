#pragma warning(disable:4326)
#include<iostream>
using namespace std;

#define tab "\t"
//#define SORT_1
//#define SORT_2
void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS]{};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (100 - 10) + 10;
		}
	}
	
#ifdef SORT_1
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[i][j] < arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}

				}
			}
		}
	}
#endif // SORT_1


	cout << "Исходный массив: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}

	              //Сортировка массива:

	int iterations = 0;
	int exchanges = 0;
#ifdef SORT_2
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				/*int l;
				if (k == i)  //Если пребирается строка с выбранным элементом
					l = j + 1;   //то перебор начинается с элемента, следующего за выбранным
				else
					l = 0;  //Все остальные элементы перебираются с начала*/
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
					iterations++;
				}
			}
		}
	}

	cout << "Сортировка выполнена за " << iterations << " итераций\n" << endl;
	cout << "При этом выполнено " << exchanges << " обмена элементов\n" << endl;
#endif // SORT_2


	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = 0; j < ROWS * COLS; j++)
		{
			if (arr[0][j] < arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
				exchanges++;
			}
			iterations++;
		}
	}
	cout << "Сортировка выполнена за " << iterations << " итераций\n" << endl;
	cout << "При этом выполнено " << exchanges << " обмена элементов\n" << endl;
	
		cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}