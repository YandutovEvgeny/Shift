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
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}