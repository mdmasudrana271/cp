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
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll odd = 0;
        for (int i = 0; i < k; i++)
        {
            if (v[i] % 2 != 0)
            {
                odd++;
            }
        }

        ll ans = 0;
        if (odd > 0)
        {
            ans++;
        }
        for (int i = k; i < n; i++)
        {
            if (v[i - k] % 2 != 0)
            {
                odd--;
            }
            if (v[i] % 2 != 0)
            {
                odd++;
            }
            if (odd > 0)
            {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}