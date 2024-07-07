#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ll ans = n;
        for (auto [x, y] : mp)
        {
            ll a = n - y;
            ll b = a * x;
            ans = min(ans, b);
        }
        cout << ans << '\n';
    }
    return 0;
}