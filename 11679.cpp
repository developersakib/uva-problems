#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int b, n;

	cin >> b >> n;

	while( b!=0 && n!=0 )
	{
		int reserve[b], banks[b], flag = 0, c, d, v;
		
		for (int i = 0; i <= b; i++)
			banks[i] = 0;

		for (int i = 1; i <= b; i++)
			cin >> reserve[i];

		for (int i = 0; i < n; i++)
		{
			cin >> d >> c >> v;
			banks[d] -= v;
			banks[c] += v;
		}

		for (int i = 1; i <= b; i++)
		{
			if( banks[i]+reserve[i] < 0 )
			{
				flag = 1;
				break;
			}
		}
		if( flag == 1 )
			cout << "N" << endl;
		else 
			cout << "S" << endl;

		cin >> b >> n;
	}

	return 0;
}