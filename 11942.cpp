#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int n, lamb, prev, in, de;
	bool ordered;
	cin >> n;
	cout << "Lumberjacks:" << endl;
	while(n--)
	{
		ordered = true;
		de = in = 0;

		for (int i = 0; i < 10; i++)
		{
			cin >> lamb;
			if ( i == 1 && lamb > prev )
				in = 1;
			else if( i == 1 && lamb < prev )
				de = 1;
			
			if( (in == 1 && lamb < prev) || (de == 1 && lamb > prev) )
				ordered = false;

			prev = lamb;
		}
		
		if( ordered )
			cout << "Ordered" << endl;
		else 
			cout << "Unordered" << endl;
	}
	return 0;
}	