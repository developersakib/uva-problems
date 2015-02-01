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

		//memset(sculp, 0, height*length);
		
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

		for(i=0; i<height; i++)
		{
			for(j=0; j<length; j++)
				cout << sculp[i][j] << "  ";
			cout << endl;
		}

		int count = 0, c, flag=0;

		for( i=0; i<height; i++ )
		{
			//c = 0;
			for( j=0; j<length-1; j++ )
			{
				if( sculp[i][j] == 0 && sculp[i][j+1] == 1 )
					count++;


				// if( sculp[i][j] == 0 && sculp[i][j+1] == 1 )
				// 	c++;
				// else if( sculp[i][j] == 1 && sculp[i][j+1] == 0 )
				// 	c++;
				// else if(  )
			}

			if( sculp[i][j-1] ==  )
			// if( c > 0 )
			// 	count += c;
			// else 
			// 	count++;
		}

		cout << count << endl;

		cin >> height >> length;
	}
	return 0;
}