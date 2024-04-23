#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        ll sum = 0, pbcnt = 0;
        int mn = INT_MAX, mx = INT_MIN;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                sum += v[k];
                pbcnt++;
                mn = min(mn, v[k]);
                mx = max(mx, v[k]);
            }
        }
        int def = abs(mx - mn);
        if (sum >= l && sum <= r && def >= x && pbcnt >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}