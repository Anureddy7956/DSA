#include <stdio.h>

// to find the minimum of two values
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Function to perform Floyd's algorithm
void floyd(int p[][10], int n) {
    int i, j, k; // i-> starting node, j-> end node, k-> intermediate node
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                // Update with the minimum cost path
                p[i][j] = MIN(p[i][j], p[i][k] + p[k][j]);
            }
        }
    }
}

int main() {
    int a[10][10], n, i, j;
    
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    
    // Note: For unreachable paths in Floyd's, enter a large number like 999 (representing infinity)
    printf("Enter the cost adjacency matrix (use 999 for infinity):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    floyd(a, n);
    
    printf("\nResultant shortest path matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i][j] == 999) {
                printf("INF\t");
            } else {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
