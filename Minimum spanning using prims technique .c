#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define MAX_VERTICES 10
int findMinKey(int key[], bool mstSet[], int vertices) 
{
    int minKey = INT_MAX, minIndex,v;
    for (v = 0; v < vertices; v++)
        if (!mstSet[v] && key[v] < minKey)
		 {
            minKey = key[v];
            minIndex = v;
        }
    return minIndex;
}
void printMST(int parent[], int n, int graph[MAX_VERTICES][MAX_VERTICES]) 
{
	int i;
    printf("Edge \tWeight\n");
    for (i = 1; i < n; i++)
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
}
void primMST(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) 
{
    int parent[vertices],i,count;  
    int key[vertices];     
    bool mstSet[vertices]; 
    for (i = 0; i < vertices; i++)
	 {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for (count = 0; count < vertices - 1; count++) 
	{
        int u = findMinKey(key, mstSet, vertices),v;
        mstSet[u] = true;
        for (v = 0; v < vertices; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) 
			{
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }
    printMST(parent, vertices, graph);
}
int main() 
{
    int vertices,i,j;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    int graph[MAX_VERTICES][MAX_VERTICES];
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < vertices; i++) 
	{
        for (j = 0; j < vertices; j++) 
		{
            scanf("%d", &graph[i][j]);
             if (graph[i][j] == INT_MAX) 
			 {
                // Adjust if needed for your specific needs
                // e.g., you could use a different large value for infinity
            }
        }
    }
    primMST(graph, vertices);
    return 0;
}

OUTPUT:
Enter the number of vertices: 9
Enter the adjacency matrix:
0 4 0 0 0 0 0 8 0
4 0 8 0 0 0 0 11 0
0 8 0 7 0 4 0 0 2
0 0 7 0 9 14 0 0 0
0 0 0 9 0 10 0 0 0
0 0 4 14 10 0 2 0 0
0 0 0 0 0 2 0 1 6
8 11 0 0 0 0 1 0 7
0 0 2 0 0 0 6 7 0
Edge    Weight
0 - 1   4
1 - 2   8
2 - 3   7
3 - 4   9
2 - 5   4
5 - 6   2
6 - 7   1
2 - 8   2

--------------------------------
Process exited after 167.1 seconds with return value 0
Press any key to continue . . .
