#include <stdio.h>
// Brute Force Solution for two sum 
void twoSum(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("Target found at indices: %d , %d\n", i, j);
                printf("Elements are: %d + %d = %d\n", a[i], a[j], target);
                return; 
            }
        }
    }
    printf("No pair found\n");
}
int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    twoSum(a, n, target);

    return 0;
}