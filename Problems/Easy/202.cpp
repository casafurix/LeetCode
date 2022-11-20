#include <bits/stdc++.h>
using namespace std;
#define ll long long

int isHappy(int n)
{
    int num = 0;
    while (n > 0)
    {
        num += pow(n % 10, 2);
        n /= 10;
    }
    return num;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << isHappy(19);

    return 0;
}