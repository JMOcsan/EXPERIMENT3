#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char arr[100];
	int i, j;

	cout << "Enter characters: " << endl;
	cin.getline(arr, 100);
	i = strlen(arr);
	
	for (j = i; j >= 0; j--)
		{
			cout << arr[j];
		}
		
	cout << "\nArray size = " << i + 1 << endl;
	getch();
	return 0;
}
