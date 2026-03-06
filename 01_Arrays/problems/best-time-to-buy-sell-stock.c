#include <stdio.h>
int main()
{

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    // minimum price seen so far
    int min_price = prices[0];

    // maximum profit
    int max_profit = 0;

    for (int i = 1; i < n; i++)
    {

        // update minimum price
        if (prices[i] < min_price)
        {
            min_price = prices[i];
        }

        // calculate profit if we sell today
        int profit = prices[i] - min_price;

        // update maximum profit
        if (profit > max_profit)
        {
            max_profit = profit;
        }
    }
    printf("Maximum profit =%d", max_profit);

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)