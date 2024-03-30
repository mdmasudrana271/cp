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
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<ll> pref(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            pref[i] = v[i] + pref[i - 1];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll sum = pref[n];
            sum -= pref[r] - pref[l - 1];
            sum += ((r - l + 1LL) * k);

            if (sum % 2LL != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}