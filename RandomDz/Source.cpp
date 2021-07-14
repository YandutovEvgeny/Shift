#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 10;
	int arr[n]{};

	srand(time(NULL));
	for (int i = 0; i < n;)
	{
		bool counter = false;
		int newRandom = rand() % 10;	

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandom)
			{
				counter = true;
				break;
			}
		}
		
		if (counter != true)
		{
			arr[i] = newRandom;
			i++;
		}
		
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}

}