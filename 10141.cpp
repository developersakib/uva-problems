#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;

struct proposal
{
	char name[100];
	float price;
	int met;
};

int main()
{
	int n, p, rfp=1;

	cin >> n >> p;

	while( n != 0 && p != 0 )
	{
		char names[100];
		proposal x[p];
		
		getchar();
		for (int i = 0; i < n; i++)
			cin.getline(names, 100);
			
		
		int max_index = 0, max = 0;
		
		for (int i = 0; i < p; i++)
		{
			
			cin.getline(x[i].name, 100);
			cin >> x[i].price >> x[i].met;

			

			if( x[i].met > max )
			{
				max_index = i;
				max = x[i].met;
			}

			getchar();
			for (int j = 0; j < x[i].met; j++)
				cin.getline(names, 100);
			
						
		}

		

		for(int i=0; i<p; i++)
		{
			if( x[i].met == x[max_index].met )
			{
				if( x[i].price < x[max_index].price )
					max_index = i;
				else if( x[i].price == x[max_index].price )
				{
					if( i < max_index )
						max_index = i;
				}
			}
		}

		if( rfp > 1 )
			cout << endl;
		cout << "RFP #" << rfp << endl;
		cout << x[max_index].name << endl;
		
		cin >> n >> p;
		rfp++;
	}	

	return 0;
}