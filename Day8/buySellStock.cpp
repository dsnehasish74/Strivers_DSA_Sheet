#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // Write your code here.
    int l = prices[0], p = 0;
    int n = prices.size();
    for (int i = 1; i < n; i++)
    {
        p = max(p, prices[i] - l);
        l = min(l, prices[i]);
    }

    return p;
}