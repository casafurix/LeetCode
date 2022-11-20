#include <bits/stdc++.h>
using namespace std;
#define ll long long

// bool solve()
// {
//     string x;
//     cin >> x;
//     string original = x;
//     string y = "";
//     int n = x.length();
//     for (int i = n; i >= 0; i--)
//     {
//         // cout << x[i];
//         y = y + x[i];
//     }

//     if (y == original)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

bool isPalindrome(int x)
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // solve();
    int x;
    cin >> x;
    int rev = 0;

    int original = x;

    while (x != 0)
    {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    if (original == rev)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    isPalindrome(x);
}