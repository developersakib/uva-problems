#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int height, length;
	int i, x, j;

	cin >> height >> length;

	while( height != 0 && length != 0 )
	{
		int sculp[height][length];

		for(i=0; i<height; i++)
			for(j=0; j<length; j++)
				sculp[i][j] = 0;


		for( i=0; i<length; i++ )
		{
			cin >> x;
			for( j = x-1; j>=0; j-- )
			{
				sculp[j][i] = 1;
			}
		}


		int count = 0, c, flag=0;
        int regist;
        bool on = false;
		for( i=0; i<height; i++ )
		{
		    on = false;
			for( j=0; j<length; j++ )
			{
			    if( sculp[i][j] == 0 && on == false )
                {
                    on = true;
                    count++;
                }
                if( sculp[i][j] == 1 && on == true )
                    on = false;
			}

		}

		cout << count << endl;

		cin >> height >> length;
	}
	return 0;
}
