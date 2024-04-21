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
        int n;
        cin >> n;
        vector<ll> v(n);
        ll ans = 0, mn = INT_MAX, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                neg++;
            }
            ans += abs(v[i]);
            mn = min(mn, abs(v[i]));
        }
        if (neg % 2 != 0)
        {
            ans -= (2LL * mn);
        }
        cout << ans << endl;
    }
    return 0;
}