
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int check(int n, int m,int i,int j, vector<vector<int>> &grid)
{
    if (i >= 0 && j >= 0 && i < n && j < m && grid[i][j] == 1)
    {
        return 1;
    }
    return 0;
}

int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    int fresh = 0, time = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                // push into queue
                q.push({i, j});
            }
            else if (grid[i][j] == 1)
            {
                fresh++;
            }
        }
    }
    if (fresh == 0)
        return 0;
    // start BFS traversal
    while (!q.empty())
    {
        int size_q = q.size();
        int temp = 0;
        while (size_q != 0)
        {
            pair<int, int> p = q.front();
            q.pop();

            int a = p.first;
            int b = p.second;

            
            if (check(n, m, a + 1, b, grid))
        {
            temp++;
            grid[a+1][b]=2;
            pair<int, int> p;
            p.first = a + 1;
            p.second = b;
            q.push(p);
        }
        if (check(n, m, a, b + 1, grid))
        {
            temp++;
            grid[a][b+1]=2;
            pair<int, int> p;
            p.first = a;
            p.second = b + 1;
            q.push(p);
        }
        if (check(n, m, a - 1, b, grid))
        {

            temp++;
            grid[a-1][b]=2;
            pair<int, int> p;
            p.first = a - 1;
            p.second = b;
            q.push(p);
        }
        if (check(n, m, a, b - 1, grid))
        {
            temp++;
            grid[a][b-1]=2;
            pair<int, int> p;
            p.first = a;
            p.second = b - 1;
            q.push(p);
        }


            size_q--;
        }
        if (temp != 0)
            time++;
    }

    // we checked if any fresh oranges are still there
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                time = 0;
                break;
            }
        }
    }

    return (time == 0) ? -1 : time;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int c = orangesRotting(arr);

    cout << endl;
    cout << c;
    return 0;
}
/* test case

3 3
2 1 1
1 1 0
0 1 1

*/