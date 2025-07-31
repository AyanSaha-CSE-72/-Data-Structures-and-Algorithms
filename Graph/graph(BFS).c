//GRAPH(DSF & BSF)
#include <stdio.h>
#include <stdbool.h>
#define MAX_NODES 100

int graph[MAX_NODES][MAX_NODES]; // adjacency matrix representation of graph
bool visited[MAX_NODES]; // array to keep track of visited nodes

void dfs(int current_node, int num_nodes)
{
    printf("%d ", current_node);
    visited[current_node] = true;
    for (int i = 0; i < num_nodes; i++)
    {
        if (graph[current_node][i] == 1 && !visited[i])
        {
            dfs(i, num_nodes);
        }
    }
}

void bfs(int start_node, int num_nodes)
{
    int queue[MAX_NODES], front = -1, rear = -1; // queue implementation for BFS
    visited[start_node] = true;
    queue[++rear] = start_node;
    while (front != rear)   // while queue is not empty
    {
        int current_node = queue[++front];
        printf("%d ", current_node);
        for (int i = 0; i < num_nodes; i++)
        {
            if (graph[current_node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                queue[++rear] = i;
            }
        }
    }
}

int main()
{
    int num_nodes, num_edges, start_node;
    printf("Enter the number of nodes and edges: ");
    scanf("%d%d", &num_nodes, &num_edges);
    printf("Enter the edges:\n");
    int node1, node2;
    for (int i = 0; i < num_edges; i++)
    {
        scanf("%d%d", &node1, &node2);
        graph[node1][node2] = 1;
        graph[node2][node1] = 1; // assuming an undirected graph
    }
    printf("Enter the starting node: ");
    scanf("%d", &start_node);
    printf("DFS traversal: ");
    dfs(start_node, num_nodes);
    printf("\n");
    for (int i = 0; i < num_nodes; i++)
    {
        visited[i] = false; // reset visited array for BFS
    }
    printf("BFS traversal: ");
    bfs(start_node, num_nodes);
    printf("\n");
    return 0;
}
