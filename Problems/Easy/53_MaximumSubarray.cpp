#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = INT_MIN, currentSum = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            currentSum += nums[i];
            if (currentSum > maxSum)
                maxSum = currentSum;
            if (currentSum < 0)
                currentSum = 0;
        }
        return maxSum;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}