#include <iostream>

using namespace std;

int main()
{
	int test,n, prev, j, wall, high, low;
	cin >> test;
	j=0;
	while( j < test ) {
		
		cin >> n;
		high = low = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> wall;
			if ( i > 0 ) {
				if( wall > prev )
					high++;
				if( wall < prev )
					low++;
			}
			prev = wall;
		}
		cout << "Case " << j+1 << ": " << high << " " << low << endl;
		j++;
	}

	return 0;
}