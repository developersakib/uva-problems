#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;

int main()
{
	char str[1000005];
	int i, count = 1;

	while( cin.getline(str, 1000005) )
	{
		int n, i, j, minn, maxx;		
		cin >> n;

		cout << "Case " << count << ":" << endl;
		
		while(n--)
		{
			int flag = 0;
			cin >> i >> j;
			minn = min(i, j);
			maxx = max(i, j);

			for (int k = minn+1; k <= maxx; k++)
			{
				if( str[k] != str[minn] )
				{
					flag = 1;
					break;
				}
			}

			if( flag == 1 )
				cout << "No" << endl;
			else 
				cout << "Yes" << endl;
		}
		count++;
		getchar();
	}

	return 0;
}