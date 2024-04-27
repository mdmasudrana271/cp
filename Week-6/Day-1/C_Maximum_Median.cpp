#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    auto ok = [&](ll m)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            cnt += (v[i] < m ? (m - v[i]) : 0);
        }
        return cnt <= k;
    };

    ll l = 1, r = 2e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}