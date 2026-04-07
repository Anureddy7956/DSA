#include <stdio.h>
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }
    return maxProfit;
}
int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    int prices[n];
    printf("Enter stock prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
   int result = maxProfit(prices, n);
    printf("Maximum Profit: %d\n", result);
    return 0;
}