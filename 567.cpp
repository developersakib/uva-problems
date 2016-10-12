/*
    Author: Md. Nazmus Sakib
    Uva: 567 - Risk 
*/

#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <queue>
#include <list>
using namespace std;

int bfs(int start, int finish, vector < list <int> > &v);

int main()
{
    // freopen("567.in.txt","r", stdin);
    // freopen("567.out.txt", "w", stdout);

    int from, to, number, set = 1;
    from = 0;
    vector < list <int> > v(22);

    while( cin >> number )
    {
        if( from == 19 )
        {
            from = 0;
            for(int i=0; i<=20; i++)
                v[i].clear();
        }

        from++;
        for(int i=0; i<number; i++)
        {
            cin >> to;
            v[from].push_back(to);
            v[to].push_back(from);
        }

        if(from == 19)
        {
            //if( set>1 )
            //    cout << endl;
            cout << "Test Set #" << set << endl;
            set++;
            int n, start, finish, result;
            cin >> n;
            for(int j=0; j<n; j++)
            {
                cin >> start >> finish;
                int result = bfs(start, finish, v);
                cout << setw(2) << right << start << " to " << setw(2) << right << finish << ": " << result << endl;
            }
            cout << endl;
        }
    }



    return 0;
}

int bfs(int start, int finish, vector < list<int> > &v)
{
    int visited[22], cost[22];
    list <int> :: iterator i;
    queue <int> q;

    memset(visited, 0, sizeof(visited));
    memset(cost, 0, sizeof(cost));

    q.push(start);
    visited[start] = 1;
    cost[start] = 0;

    while(!q.empty())
    {
        int top = q.front(); q.pop();

        for(i = v[top].begin(); i!=v[top].end(); i++)
        {
            if( !visited[*i] )
            {
                visited[*i] = 1;
                cost[*i] = cost[top] + 1;
                q.push(*i);
            }
        }
    }
    return cost[finish];
}
