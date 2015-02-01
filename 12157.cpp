#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	int test, seconds, m, n, no, mile, juice;
	double avg;

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> no;
		mile = juice = 0;
		for (int j = 0; j < no; j++)
		{
			cin >> seconds;
			avg = (seconds+1) / 30.0;
			m = ceil(avg);
			avg = (seconds+1) / 60.0;
			n = ceil(avg);
			mile = mile + (m * 10);
			juice = juice + (n * 15);
		}
		cout << "Case " << i+1 << ": ";
		if( mile < juice )
			cout << "Mile " << mile << endl;
		else if( juice < mile )
			cout << "Juice " << juice << endl;
		else 
			cout << "Mile Juice " << mile << endl;
	}

	return 0;
}