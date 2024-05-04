#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll k, n;
    cin >> k;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mid)
            {
                cnt += mid;
            }
            else
            {
                cnt += v[i];
            }
        }

        return (cnt / mid) >= k;
    };

    ll l = 0, ans = 0, mid, r = 1e13;
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