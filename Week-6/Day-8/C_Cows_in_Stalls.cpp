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
    sort(v.begin(), v.end());

    auto ok = [&](ll mid)
    {
        int l = v[0], cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - l >= mid)
            {
                l = v[i];
                cnt++;
            }
        }
        return cnt >= k;
    };

    ll l = 0, r = 1e9 + 10, mid, ans = 0;
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