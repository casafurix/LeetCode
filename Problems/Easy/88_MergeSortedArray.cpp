#include <bits/stdc++.h>
using namespace std;
#define ll long long

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int first = m - 1, second = n - 1;
    for (int i = m + n - 1; i >= 0; i--)
    {
        if (second < 0)
            break;
        if (nums1[first] > nums2[second])
        {
            nums1[i] = nums1[first];
            first--;
        }
        else
        {
            nums1[i] = nums2[second];
            second--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}