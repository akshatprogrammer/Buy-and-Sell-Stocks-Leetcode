# Buy-and-Sell-Stocks-Leetcode
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

## Example 1:
<b>Input</b>: prices = [7,1,5,3,6,4]</br>
<b>Output</b>: 5 </br>
<b>Explanation</b>: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

## Example 2:
<b>Input</b>: prices = [7,6,3,4,1]</br>
<b>Output</b>: 0 </br>
<b>Explanation</b>: In this case, no transactions are done and the max profit = 0.

## Algorithm
