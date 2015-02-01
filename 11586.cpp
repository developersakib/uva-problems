#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int test, male, female;
	char track[200];

	cin >> test;
	getchar();
	while( test-- ) 
	{
		male = female = 0;
		
		cin.getline(track, 200);

		for(int i=0; track[i] != '\0'; i++)
			if( track[i] == 'M' )
				male++;
			else if( track[i] == 'F' )
				female++;
		if( male > 1 && female > 1 && male == female )
			cout << "LOOP" << endl;
		else 
			cout << "NO LOOP" << endl;
	}

	return 0;
}