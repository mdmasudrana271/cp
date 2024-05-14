#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll gcd(int a, int b)
{
    return __gcd(a, b);
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        map<int, int> mp;
        for (int j = 2; j <= sqrt(v[i]); j++)
        {
            if (v[i] % j == 0)
            {
                while (v[i] % j == 0)
                {
                    mp[j]++;
                    v[i] /= j;
                }
            }
        }
        if (v[i] > 1)
        {
            mp[v[i]]++;
        }
        for (auto [x, y] : mp)
        {
            cnt[x]++;
        }
    }

    int mx = INT_MIN;
    for (auto [x, y] : cnt)
    {
        mx = max(mx, y);
    }
    if (mx == INT_MIN)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << mx << endl;
    }
    return 0;
}