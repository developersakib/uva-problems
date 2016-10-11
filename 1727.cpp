/** 
    Author: Md. Nazmus Sakib
    Twitter: @nzsakib
**/

#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main()
{
	// freopen("1727.in", "r", stdin);
	// freopen("1727.out", "w", stdout);

	int cases;
	string week[] = { "SAT", "SUN", "MON", "TUE", "WED", "THU", "FRI" };
	map <string, int> days;
	days["JAN"] = 31; days["FEB"] = 28; days["MAR"] = 31; days["APR"] = 30; days["MAY"] = 31; 
	days["JUN"] = 30; days["JUL"] = 31; days["AUG"] = 31; days["SEP"] = 30; days["OCT"] = 31;
	days["NOV"] = 30; days["DEC"] = 31;

	cin >> cases;

	while(cases--)
	{
		string month, day;
		int count = 0;

		cin >> month >> day;
		int l = days[month];

		int j=0;

		for(int k=0; k<7; k++)
			if( week[k] == day )
				j = k;

		for(int i=0; i<l; i++)
		{
			if( j > 6)
				j = 0;

			if( week[j] == "FRI" || week[j] == "SAT" )
				count++;
			j++;
		}
		cout << count << endl;
	}

	return 0;
}
