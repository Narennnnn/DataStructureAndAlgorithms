#include <bits/stdc++.h>
using namespace std;
bool bfs(int adjM[5][5], int source)
{
    char color[5] = {'n', 'n', 'n', 'n', 'n'}; // initially all colour nil
    queue<int> q;
    set<int> U, V;
    q.push(source);
    color[source] = 'r'; // r for red
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int i = 0; i < 5; i++)
        {
            if (adjM[curr][i] && color[i] == 'n')
            {
                color[i] = (color[curr] == 'r') ? 'b' : 'r';
                q.push(i);
            }
            if (color[curr] == color[i]) // if adjacent node is of same color then not bipartite
                return false;
        }
    }

    return true;
}

int main()
{
    int adjM[5][5] =
        {{0, 1, 1, 0, 0},
         {1, 0, 1, 1, 1},
         {1, 1, 0, 1, 0},
         {0, 1, 1, 0, 1},
         {0, 1, 0, 1, 0}};
    if (bfs(adjM, 0))
    {
        cout << "Yes Bipartite\n";
    }
    else
        cout << "Not Bipartite\n";
}