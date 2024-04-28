#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto ok = [&](ll m)
        {
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (m - v[i] > 0)
                {
                    sum += m - v[i];
                }
            }
            return sum <= x;
        };
        ll l = 1, r = 2e9, mid, ans = -1;
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
    }
    return 0;
}