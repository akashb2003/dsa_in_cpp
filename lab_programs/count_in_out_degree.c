#include <stdio.h>

#define MAX_NODES 100

void calculate_degrees(int graph[][MAX_NODES], int num_nodes) {
    int in_degree[MAX_NODES] = {0};
    int out_degree[MAX_NODES] = {0};

    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            if (graph[i][j]) {
                out_degree[i]++;
                in_degree[j]++;
            }
        }
    }

    printf("Node\tIn-Degree\tOut-Degree\n");
    for (int i = 0; i < num_nodes; i++) {
        printf("%d\t%d\t\t%d\n", i, in_degree[i], out_degree[i]);
    }
}

int main() {
    int num_nodes;
    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &num_nodes);

    int graph[MAX_NODES][MAX_NODES];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    calculate_degrees(graph, num_nodes);

    return 0;
}

