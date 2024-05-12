#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r;
    cin >> l >> r;
    ll n = (r - l + 1) / 2;
    vector<pair<ll, ll>> v;
    for (ll i = l; i <= r - 1; i += 2)
    {
        if (gcd(i, i + 1) == 1)
        {
            v.push_back({i, i + 1});
        }
    }
    if (v.size() >= n)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}