// You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
  int minTillNow = prices[0];
  int maxProfit = 0;
  for (int i = 0; i < prices.size() - 1; i++) {
    minTillNow = min(minTillNow, prices[i]);
    // Profit should be calculated from next day onwards.
    int profit = prices[i + 1] - minTillNow;
    maxProfit = max(profit, maxProfit);
  }
  return maxProfit;
}

// Recursive solution
void getMaxProfit(vector<int> &prices, int currentDay, int &minPrice,
                  int &maxProfit) {
  if (currentDay == prices.size()) {
    return;
  }
  if (prices[currentDay] < minPrice) {
    minPrice = prices[currentDay];
  }
  if ((prices[currentDay] - minPrice) > maxProfit) {
    maxProfit = prices[currentDay] - minPrice;
  }
  getMaxProfit(prices, currentDay + 1, minPrice, maxProfit);
}
int maxProfitRecursively(vector<int> &prices) {
  int minPrice = prices[0], maxProfit = 0;
  int currentDay = 0;
  getMaxProfit(prices, currentDay, minPrice, maxProfit);
  return maxProfit;
}

int main() {
  vector<int> prices{7, 6, 4, 3, 10};
  cout << maxProfitRecursively(prices);
  return 0;
}