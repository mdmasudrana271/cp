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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pref;
        pref.push_back(0);
        for (int i = 0; i < n; i++)
        {
            pref.push_back(pref.back() + a[i]);
        }
        vector<ll> prefmx;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                prefmx.push_back(a[i]);
            }
            else
            {
                prefmx.push_back(max(prefmx.back(), a[i]));
            }
        }

        for (int i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            auto it = upper_bound(prefmx.begin(), prefmx.end(), x);
            int idx = it - prefmx.begin();
            cout << pref[idx] << " ";
        }
        cout << endl;
    }
    return 0;
}