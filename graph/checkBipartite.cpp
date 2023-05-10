#include <bits/stdc++.h>
using namespace std;
bool bfs(int adjM[5][5], int source)
{
    bool visited[5] = {false};
    stack<int> st;
    st.push(s);
    visited[s] = true;

    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        if (curr == d)
            return true;

        // get the adjacent neighbors of the current node
        for (int i = 0; i < 5; i++)
        {
            if (adjM[curr][i] != 0 && !visited[i])
            {
                // add the adjacent node to the stack and mark it as visited
                st.push(i);
                visited[i] = true;
            }
        }
    }
    return false;
}

int main()
{
    int adjM[5][5] =
        {{0, 1, 1, 0, 0},
         {1, 0, 1, 1, 1},
         {1, 1, 0, 1, 0},
         {0, 1, 1, 0, 1},
         {0, 1, 0, 1, 0}};
    if (bfs(adjM, s, d))
    {
        cout << "Yes Bipartite\n";
    }
    else
        cout << "Not Bipartite\n";
}