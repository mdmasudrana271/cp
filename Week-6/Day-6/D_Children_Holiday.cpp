#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[i] = make_tuple(a, b, c);
    }

    vector<int> can(n);

    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = v[i];
            int t, z, y, total, can, rem, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);

            total = ((t * z) + y);
            can = (mid / total);
            rem = mid % total;
            curr = ((can * z) + min(z, (rem / t)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }

        return (!has);
    };
    int l = 0, r = 1e8, mid, ans;
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
    cout << ans << '\n';
    for (auto val : can)
    {
        cout << val << " ";
    }

    cout << '\n';
    return 0;
}