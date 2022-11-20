#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];

        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (diff != abs(arr[i + 1] - arr[i]))
                return false;
        }
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {-13, -17, -8, -10, -20, 2, 3, -19, 2, -18, -5, 7, -12, 18, -17, 12, -1};
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}