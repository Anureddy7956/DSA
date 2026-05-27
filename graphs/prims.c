#include <stdio.h>

#define inf 999
int prims(int c[10][10], int n, int s) {
    int v[10], ver[10], d[10];
    int i, j, sum = 0, min, u;
    for (i = 0; i < n; i++) {
        ver[i] = s;    
        d[i] = c[s][i];
        v[i] = 0;        
    }
    v[s] = 1;
    for (i = 1; i < n; i++) {
        min = inf;
        u = -1;
        for (j = 0; j < n; j++) {
            if (v[j] == 0 && d[j] < min) {
                min = d[j];
                u = j;
            }
        } 
        if (u == -1) break; 
        v[u] = 1;
        sum = sum + d[u];
        printf("\n Edge found: %d -> %d (weight = %d)", ver[u], u, d[u]);

        for (j = 0; j < n; j++) {
            if (v[j] == 0 && c[u][j] < d[j]) {
                d[j] = c[u][j];
                ver[j] = u;
            }
        }
    }
    return sum;
}
int main() {
    int c[10][10], i, j, res, s, n;

    printf("\n Enter number of vertices: ");
    scanf("%d", &n);

    printf("\n Enter the cost matrix %d:\n", inf);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &c[i][j]);
        }
    }

    printf("Enter the source node (0 to %d): ", n - 1);
    scanf("%d", &s);

    res = prims(c, n, s);
    printf("\n\n Total Minimum Cost = %d\n", res);

    return 0;
}                                                                                                                                    
