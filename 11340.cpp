/**
	Author: Md. Nazmus Sakib
	11340 - Newspaper
**/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
	// freopen("11340.in","r", stdin);
	// freopen("11340.out","w", stdout);

	int test;
	cin >> test;
	while(test--)
	{
		int number, cost, total=0;
		char ch;
		map <char, int> mymap;

		cin >> number;
		for(int i=0; i<number; i++)
		{
			cin >> ch >> cost;
			// values[ ch ] = cost;
			if( !mymap[ch] ) mymap[ch] = cost;
		}

		string line;
		cin >> number;
		getchar();
		for(int i=0; i<number; i++)
		{
			getline(cin, line);
			
			for(int j=0; line[j] != '\0'; j++)
			{
				//int tmp = values[ line[j] ];
				//cout <<  line[j] << " : Value = " << tmp << endl;
				if(  mymap[ line[j] ] )
					total += mymap[ line[j] ];
			}
		}
		// cout << setprecision(2) << total/100 << "$" << endl;
		printf("%.2f$\n", (double)total/100);
	}
	return 0;
}
