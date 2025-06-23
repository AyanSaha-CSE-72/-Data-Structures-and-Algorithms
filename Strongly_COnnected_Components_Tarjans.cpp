#include <bits/stdc++.h>
#define NIL -1
using namespace std;

// Global variables
vector<int> *adj;
int *disc, *low;
bool *stackMember;
stack<int> st;
int timeCounter;

void SCC(int u) {
    disc[u] = low[u] = ++timeCounter;
    st.push(u);
    stackMember[u] = true;

    for (int v : adj[u]) {
        if (disc[v] == NIL) {
            SCC(v);
            low[u] = min(low[u], low[v]);
        } else if (stackMember[v]) {
            low[u] = min(low[u], disc[v]);
        }
    }

    if (low[u] == disc[u]) {
        while (st.top() != u) {
            int w = st.top();
            cout << w << " ";
            stackMember[w] = false;
            st.pop();
        }
        int w = st.top();
        cout << w << "\n";
        stackMember[w] = false;
        st.pop();
    }
}

void findSCCs(int V) {
    timeCounter = 0;

    for (int i = 0; i < V; i++) {
        disc[i] = NIL;
        low[i] = NIL;
        stackMember[i] = false;
    }

    for (int i = 0; i < V; i++) {
        if (disc[i] == NIL) {
            SCC(i);
        }
    }
}

int main() {
    int V, E, u, v;

    cout << "Enter the number of vertices: ";
    cin >> V;

    adj = new vector<int>[V];
    disc = new int[V];
    low = new int[V];
    stackMember = new bool[V];

    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (u v) (0-based indexing):" << endl;
    for (int i = 0; i < E; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    cout << "Strongly Connected Components are:\n";
    findSCCs(V);

    // Free allocated memory
    delete[] adj;
    delete[] disc;
    delete[] low;
    delete[] stackMember;

    return 0;
}
