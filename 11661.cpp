#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
using namespace std;

char track[200002];

struct road
{
    bool found;
    int position;
};

int calculateDistance(road &rest, road &drug);

int main()
{
	long long l, i;

	cin >> l;

	while(l!=0)
	{
        road rest, drug;

        rest.found = drug.found = false;
        long distance, i, mini = INT_MAX;
        bool flag, flag2;
        flag=flag2=false;

        getchar();
        scanf("%[^\n]", track);

        for(int i=0; i<l; i++)
        {
            switch(track[i])
            {
                case 'R':
                    rest.found = true;
                    rest.position = i;
                    distance = calculateDistance(rest, drug);
                    if(  distance != -1 )
                    {
                        mini = min(distance, mini);
                        flag2=true;
                    }
                    drug.found = false;
                    break;
                case 'D':
                    drug.found = true;
                    drug.position = i;
                    distance = calculateDistance(rest, drug);
                    if(  distance != -1 )
                    {
                        mini = min(distance, mini);
                        flag2 = true;
                    }
                    rest.found = false;
                    break;
                case 'Z':
                    flag = flag2 = true;
                    break;

            }

            if(flag)
            {
                mini = 0;
                break;
            }

        }

        if( flag2 )
            cout << mini << endl;
        else
            cout << 0 << endl;

		cin >> l;
	}


	return 0;
}

int calculateDistance(road &rest, road &drug)
{
    if( rest.found && drug.found )
        return (int) fabs(rest.position - drug.position);
    else
        return -1;
}









