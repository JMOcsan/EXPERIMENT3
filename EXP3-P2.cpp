#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	const int p = 3;
	const int d = 7;
	int i, j, x, y;
	int array[p][d];

	char prov [1][4] = {"ABC"}; 

	cout << "Enter the temperatures of Province A, Province B and Province C for a week." << endl;
	{
		for (x = 0; x < 1; x++)
		{
			for (y = 0; y < 3; y++)
			{
				for (j = 0; j < 7; j++)
				{
				cout << "Province " << prov[x][y] << ", Day " << j + 1 << " : ";
				cin >> array[y][j];
				}
			}
		}
	}
	cout << "\nDisplaying Values: " << endl;
	{
		for (x = 0; x < 1; x++)
		{
			for (y = 0; y < 3; y++)
			{
				for (j = 0; j < 7; j++)
				{
				cout << "Province " << prov[x][y] << ", Day " << j + 1 << " = " << array[y][j] << endl;
				}
			}
		}
	}
	
getch();
return 0;
}
