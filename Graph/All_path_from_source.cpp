#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int printpath(int src, vector<int> &vis, vector<int> &dfsvis,
              vector<vector<int>> graph, vector<vector<int>> &v)
{

    vis.push_back(src);
    dfsvis[src] = 1;

    for (auto i : graph[src])
    {
        if (dfsvis[i] != 1)
        {

            printpath(i, vis, dfsvis, graph, v);
        }
    }
    dfsvis[src] = 0;
    //if (graph[src].empty() == 1)
    if (src==graph.size()-1)
    {
        v.push_back(vis);
    }
    vis.pop_back();
    return 0;
}
void allPathsSourceTarget(vector<vector<int>> &graph)
{

    int n = graph.size();
    vector<int> vis;
    vector<int> dfsvis(n, 0);
    int src = 0;
    vector<vector<int>> v;

    printpath(src, vis, dfsvis, graph, v);

    for (int i = 0; i < v.size(); i++)
    {
        for (auto j : v[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    // input [[4,3,1],[3,2,4],[3],[4],[]]
    int n;
    cout << "enter the number of nodes ";
    cin >> n;
    vector<vector<int>> graph(n);
    int a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cout << "enter the number of elements connected with " << i << "th index vector ";
        cin >> m;
        cout << "enter the nodes connected with " << i << "th node ";
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            graph[i].push_back(a);
        }
    }
    cout << "All possible path from 0 to desired destination are " << endl;
    allPathsSourceTarget(graph);
    return 0;
}

/*
5
3
1 3 4
2
2 3
1
3
1
4
0
[[4,3,1],[3,2,4],[],[4],[]]
*/