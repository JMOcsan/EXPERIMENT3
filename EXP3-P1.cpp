#include<iostream>
#include<conio.h>

using namespace std;
int arr[15], b, a, L, S, N;
double ttl=0, avg=0;

int main()

{
	cout << "This array takes 15 elements only." << endl;
	cout << "Type in 15 integers: ";

	for (a = 0; a < 15; a++)
	{
		cin >> arr[a];
		ttl += arr[a];
		avg = ttl / 15;
	}
	
	for (a = 0; a < 15; a++)
	{
		for (b = a + 1; b < 15; b++)
		{
			if (arr[a] > arr[b])
			{
				N = arr[a];
				arr[a] = arr[b];
				arr[b] = N;
			}
		}
		L= arr[14];
		S = arr[0];
	}
		

		cout << "The largest integer is " << L << endl;
		cout << "The smallest integer is " << S << endl;
		cout << "The total of all integers is " << ttl << endl;
		cout << "The average of all integers is " << avg << endl;

	getch();
	return 0;
}
