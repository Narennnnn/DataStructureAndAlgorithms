#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, E; // no of vertices
    cout << "Enter no. of vertices:";
    cin >> V;
    cout << "Enter no. of Edges:";
    cin >> E;
    int run = 1;
    int adjM[V + 1][V + 1];
    memset(adjM, 0, sizeof(adjM)); // memset(count, 0, sizeof(count));
    for (int i = 1; i <= E; i++)
    {
        int u, v;
        int temp;
        cout << "Enter edges from node u to v and v to u:";
        cin >> u >> v;
        adjM[u][v] = 1;
        adjM[v][u] = 1;
    }
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            cout << adjM[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}