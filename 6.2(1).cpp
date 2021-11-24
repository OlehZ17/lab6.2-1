#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Print(int* a, const int size);

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;

}
int iMin(int* a, const int size)
{
	int min = a[0], imin = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min && a[i] % 2!=0)
		{
			min = a[i];
			imin = i;
		}

	}
		return imin;
	
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 5;
	int a[n];
	int Low = -10;
	int High = 100;
	Create(a, n, Low, High);
	Print(a, n);
	iMin(a, n);
	cout << "min[i] = " << iMin(a, n) << endl;
	return 0;
}
