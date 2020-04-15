#include <iostream>
#include <bits/stdc++.h>

int maxProfit(std::vector<int>& prices);

int main() {
    int t;
    std::cin >> t;
    std::vector<int> stockPrices;
    for(int rep = 0; rep < t; rep++) {
        int in;
        std::cin >> in;
        stockPrices.push_back(in);
    }
    std::cout << "Solution: " << maxProfit(stockPrices);
    return 0;
}

int maxProfit(std::vector<int>& prices) {
    int profit = 0;
    for(int i = 1; i < prices.size(); i++) {
        if(prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}



