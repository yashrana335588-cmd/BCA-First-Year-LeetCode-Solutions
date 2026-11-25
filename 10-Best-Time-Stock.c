int maxProfit(int* prices, int pricesSize) {
    int i;
    int min = prices[0];
    int profit = 0;

    for (i = 1; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
        }

        if (prices[i] - min > profit) {
            profit = prices[i] - min;
        }
    }

    return profit;
}
