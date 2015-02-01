#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	char names[105][105];
	char say[4][10] = {
		"Happy",
		"birthday",
		"to",
		"you"
	};

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> names[i];
	}

	int count=1, m, j, flag;

	if(n > 16)
		m = ceil(n/16.0) * 16;
	else 
		m = 16;

	i = j = 0;
	flag = 0;
	while(count <= m)
	{
		if(i>=n)
			i = 0;

		cout << names[i] << ": ";
		
		if(j>3)
			j=0;
		

		if( flag != 0 && (flag%2) == 0 && j==3 )
			cout << "Rujia" << endl;
		else 
			cout << say[j] << endl;

		if( j==3 )
			flag++;

		if( flag == 4 )
			flag = 0;

		i++;
		j++;
		count++;
	}

	return 0;
}