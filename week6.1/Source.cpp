#include<iostream>
using namespace std;
int main()
{
	int i, j, a;
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			printf("%X ", j);
		}
		cout << endl;
	}
	return 0;
}