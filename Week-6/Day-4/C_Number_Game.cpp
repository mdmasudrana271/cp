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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto ok = [&](int k)
        {
            multiset<int> s;
            for (auto i : v)
            {
                s.insert(i);
            }
            for (int i = 1; i <= k; i++)
            {
                if (s.empty())
                {
                    return false;
                }

                int need = k - i + 1;
                auto it = s.upper_bound(need);
                if (it == s.begin())
                {
                    return false;
                }

                it--;
                s.erase(it);

                if (!s.empty())
                {
                    it = s.begin();
                    ll x = *it;
                    x += need;
                    s.erase(it);
                    s.insert(x);
                }
            }
            return true;
        };

        int l = 0, r = n, ans = 0, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = max(ans, mid);
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