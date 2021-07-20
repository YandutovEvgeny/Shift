#pragma warning(disable:4326)
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	//Генерация уникальных случайных чисел
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do //!!!Генерируем случайное число до тех пор ->
		{
			arr[i] = rand() % n;
			unique = true; //Надеемся на то, что сгенерировалось уникальное случайное число
			//но это нужно проверить:
			for (int j = 0; j < i; j++) //Перебирает левую часть массива относительно 
				                        //выбранного элемента в поисках повторений
			{
				if (arr[i] == arr[j]) //Если произошло совпадение 
				{
					unique = false; //то сгенерированное случайное число !является уникальным
					break; //Прерывает текущую итерацию, и все последующие
				}
			}
		} while (!unique);  // -> Пока оно не уникально!!!
		
	}
	
	//Вывод на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}