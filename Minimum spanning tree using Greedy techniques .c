#include <stdio.h>
#include <stdlib.h>
#define V 9
typedef struct edge {
    int u;
    int v;
    int weight;
} edge;
edge edges[V];
int parent[V];
int rank[V];
int compare(const void *a, const void *b);
void init() {
	int i;
    for (i = 0; i < V; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}
int find(int x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = find(parent[x]);
    }
}
void unionSets(int x, int y) {
    int x_parent = find(x);
    int y_parent = find(y);

    if (rank[x_parent] < rank[y_parent]) {
        parent[x_parent] = y_parent;
    } else if (rank[x_parent] > rank[y_parent]) {
        parent[y_parent] = x_parent;
    } else {
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
}
void kruskal() {
    edge mst[V - 1];
    int mst_size = 0;
    int n_edges,i;
    printf("Enter the number of edges: ");
    scanf("%d", &n_edges);
    for (i = 0; i < n_edges; i++) {
        int u, v, weight;
        printf("Enter the starting vertex of edge %d: ", i + 1);
        scanf("%d", &u);
        printf("Enter the ending vertex of edge %d: ", i + 1);
        scanf("%d", &v);
        printf("Enter the weight of edge %d: ", i + 1);
        scanf("%d", &weight);
        edges[i] = (edge) { u, v, weight };
    }
    qsort(edges, n_edges, sizeof(edges[0]), compare);
    for (i = 0; i < n_edges; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int weight = edges[i].weight;
        if (find(u) != find(v)) {
            mst[mst_size++] = edges[i];
            unionSets(u, v);
        }
    }
    for (i = 0; i < mst_size; i++) {
        printf("(%d, %d, %d)\n", mst[i].u, mst[i].v, mst[i].weight);
    }
}
int compare(const void *a, const void *b) {
    edge *edge1 = (edge *) a;
    edge *edge2 = (edge *) b;
    return edge1->weight - edge2->weight;
}
int main() {
    init();
    kruskal();
    return 0;
}

OUTPUT:
Enter the starting vertex of edge 3: 1
Enter the ending vertex of edge 3: 5
Enter the weight of edge 3: 4
Enter the starting vertex of edge 4: 2
Enter the ending vertex of edge 4: 3
Enter the weight of edge 4: 3
Enter the starting vertex of edge 5: 2
Enter the ending vertex of edge 5: 6
Enter the weight of edge 5: 7
Enter the starting vertex of edge 6: 2
Enter the ending vertex of edge 6: 4
Enter the weight of edge 6: 3
Enter the starting vertex of edge 7: 3
Enter the ending vertex of edge 7: 4
Enter the weight of edge 7: 5
Enter the starting vertex of edge 8: 3
Enter the ending vertex of edge 8: 6
Enter the weight of edge 8: 8
Enter the starting vertex of edge 9: 4
Enter the ending vertex of edge 9: 5
Enter the weight of edge 9: 9
(1, 4, 1)
(1, 2, 2)
(2, 3, 3)
(1, 5, 4)
(2, 6, 7)

--------------------------------
Process exited after 45.63 seconds with return value 0
Press any key to continue . . .
