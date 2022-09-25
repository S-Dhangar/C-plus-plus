#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(int i, int j, vector<vector<int>> &vis,int n)
{
    if (i >= 0 && j >= 0 && i < n && j < n && vis[i][j] != 1)
    {
        return 1;
    }
    return 0;
}

int steps(int c1, int c2, int t1, int t2, vector<vector<int>> &vis, int count,int N)
{

    if (c1 == t1 && c2 == t2)
        return count;
    vis[c1][c2] = 1;
    queue<pair<int, int>> q;
    q.push({c1, c2});

    while ((q.empty() != 1))
    {
        int size = q.size();
       
        while (size--)
        {   
            int x = q.front().first;
            int y = q.front().second;
             q.pop();
            if(x==t1 && y==t2){
                return count;
            }

            if (check(x + 1, y - 2,vis,N)) //1
            {
                vis[x+1][y-2]=1;
                q.push({x+1,y-2});
            }
            if (check(x - 1, y - 2,vis,N))//2
            {
                vis[x-1][y-2]=1;
                q.push({x - 1, y - 2});

            }

            if (check(x - 2, y - 1,vis,N))//3
            {
                vis[x-2][y-1]=1;
                q.push({x - 2, y - 1});
            }
            if (check(x - 2, y + 1,vis,N))//4
            {
                vis[x-2][y+1]=1;
                q.push({x - 2, y + 1});
            }

            if (check(x - 1, y + 2,vis,N))//5
            {
                vis[x-1][y+2]=1;
                q.push({x - 1, y + 2});
            }

            if (check(x + 1, y + 2,vis,N))//6
            {
                vis[x+1][y+2]=1;
                q.push({x + 1, y + 2});
            }

            if (check(x + 2, y - 1,vis,N))//7
            {
                vis[x+2][y-1]=1;
                q.push({x + 2, y - 1});
            }

            if (check(x + 2, y + 1,vis,N))//8
            {
                vis[x+2][y+1]=1;
                q.push({x+2,y+1});
            }
        }
        count++;
    }
    return count;
}

int main()
{
    int c1, c2, t1, t2,N;
    cin >>N>> c1 >> c2 >> t1 >> t2;
    int ksteps = 0;
    vector<vector<int>> vis(8, vector<int>(8, 0));
    int ans = steps(c1, c2, t1, t2, vis, ksteps,N);
    cout << ans;
    return 0;
}