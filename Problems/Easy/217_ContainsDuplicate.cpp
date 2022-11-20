#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        //     int n = nums.size();
        //     for(int i = 0; i<n; i++){
        //         int element = nums[i];
        //         for(int j = i+1; j<n; j++){
        //             if(element == nums[j]) return true;
        //         }
        //     }
        //     return false;
        // } correct, but TLE
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};
