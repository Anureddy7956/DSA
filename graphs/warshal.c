#include <stdio.h>
// Function to perform Warshall's algorithm
void wash(int p[][10], int n) {
    int i, j, k; // i-> starting node, j-> end node, k-> intermediate node
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                // Added parentheses to ensure correct logical evaluation
                p[i][j] = p[i][j] || (p[i][k] && p[k][j]);
            }
        }
    }
}

int main() {
    int a[10][10], n, i, j;
    
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    
    printf("Enter the adjacency matrix:\n");
    // Changed loops to start from 1 to match your 1-indexed algorithm
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    wash(a, n);
    
    printf("\nResultant path matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Changed from %d\n to %d\t to print it cleanly as a matrix grid
            printf("%d\t", a[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}
