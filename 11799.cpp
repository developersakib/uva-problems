#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int test;

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		 int n, max, student;
		 cin >> n;
		 max = 0;
		 for (int j = 0; j < n; j++)
		 {
		 	cin >> student;
		 	if( student > max )
		 	{
		 		max = student;
		 	}
		 }
		 cout << "Case " << i+1 << ": " << max << endl;
	}

	return 0;
}	