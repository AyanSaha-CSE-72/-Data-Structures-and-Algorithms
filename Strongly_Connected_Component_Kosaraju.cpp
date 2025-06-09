#include <bits/stdc++.h>
using namespace std;
bool vis[105];
vector<int> adj[105];
stack<int> st;
vector<int> adjT[105];
void dfs(int node)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it);
        }
    }

    st.push(node);
}
void dfs3(int node)
{
    vis[node] = 1;
    cout<<node<<" ";
    for (auto it : adjT[node])
    {
        if (!vis[it])
        {
            dfs3(it);
        }
    }
}
int kosaraju(int V)
{
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    for (int i = 0; i < V; i++)
    {
        vis[i] = 0;
        for (auto it : adj[i])
        {
            // i -> it
            // it -> i
            adjT[it].push_back(i);
        }
    }

    int scc = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!vis[node])
        {
            scc++;
            cout<<scc<<" SCC is: ";
            dfs3(node);
            cout<<endl;
        }
    }
    return scc;
}
int main()
{

//    int n = 5;
//    int edges[5][2] =
//    {
//        {1, 0}, {0, 2},
//        {2, 1}, {0, 3},
//        {3, 4}
//    };
//    vector<int> adj[n];
//    for (int i = 0; i < n; i++)
//    {
//        adj[edges[i][0]].push_back(edges[i][1]);
//    }
    int edge, node;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    int ans = kosaraju(edge);
    cout << "The number of strongly connected components is: " << ans << endl;
    return 0;
}
