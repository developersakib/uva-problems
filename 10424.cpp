#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include <ctype.h>
#include <iomanip>
using namespace std;

int calculate_string(char name[]);

int main()
{
	char name1[27], name2[27];
	int value1, value2;
	double result;

	while( cin.getline(name1, 27) ) 
	{
		cin.getline(name2, 27);

		value1 = calculate_string(name1);
		value2 = calculate_string(name2);

		if( value1 < value2 )
			result = (value1/(value2 * 1.0)) * 100;
		else
			result = (value2/(value1 * 1.0)) * 100;

		cout << fixed << setprecision(2) << result << " %" << endl;
	}

	return 0;
}

int calculate_string(char name[])
{
	int total = 0;
	int sum = 0;

	for (int i = 0; name[i] != '\0'; i++)
	{
		if( tolower(name[i]) >= 'a' && tolower(name[i]) <= 'z' )
			total += ( (int)tolower(name[i]) - 96 );
	}


	while( total > 9 )
	{
		sum = 0;
		while( total )
		{
			sum += (total%10);
			total /= 10; 
		}
		
		total = sum;
	}

	return total;
}