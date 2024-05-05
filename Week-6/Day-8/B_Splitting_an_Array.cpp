#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // sort(v.begin(), v.end());

    auto ok = [&](ll mid)
    {
        ll sum = 0, cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mid)
            {
                return false;
            }
            if (sum + v[i] > mid)
            {
                sum = v[i];
                cnt++;
            }
            else
            {
                sum += v[i];
            }
        }
        return cnt <= k;
    };

    ll l = 0, r = 1e14, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}