#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string t, p;
    cin >> t;
    cin >> p;
    int n = t.size(), m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[v[i]] = true;
        }

        int j = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] == p[j] && !bad[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                flag = true;
            }
        }

        return flag;
    };
    int l = 0, r = n, ans = 0, mid;
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