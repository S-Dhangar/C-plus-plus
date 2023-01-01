#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> &M, int n)
{
    // code here
    int c = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] == 1)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            for (int k = 0; k < n; k++)
            {
                if (i != k)
                {
                    if (M[k][i] == 0 || M[i][k] == 1)
                    {
                        ans = -1;
                    }
                }
            }
            return i;
        }
        c=0;
    }
    return -1;
}

int main()
{
    vector<vector<int>> vec;
    vector<int> v;
    int a, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            v.push_back(a);
        }
        vec.push_back(v);
        v.clear();
    }

    cout << celebrity(vec, n);
    return 0;
}