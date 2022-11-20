#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minSoFar = prices[0];
        for(int i = 0; i < prices.size(); i++){
            minSoFar = min(minSoFar, prices[i]);
            int profit = prices[i] - minSoFar;
            maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}