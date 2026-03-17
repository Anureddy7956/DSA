#include<stdio.h>
#define max 1000
// Better Solution for two sum   o(n)
void twoSum(int arr[], int n, int target) {
    int hash[max]={0};
    for(int i=0 ; i<n ; i++){
        int complement = target - arr[i];
        if(complement >=0 && hash[complement]==0){
            printf("Pair found : %d and %d\n",arr[i],complement);
            return;
        }
        if(arr[i]>=0 && arr[i]<max){
            hash[arr[i]]==1;
        }
    }
    printf("no pair is found");
}
int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    twoSum(arr, n, target);
    return 0;
}