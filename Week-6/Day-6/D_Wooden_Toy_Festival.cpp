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

        sort(v.begin(), v.end());

        auto ok = [&](int m)
        {
            int j = 0, cnt = 1;

            for (int i = 0; i < n; i++)
            {
                if (v[i] - v[j] > (2 * m))
                {
                    cnt++;
                    j = i;
                }
            }

            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, ans = 0;

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
    }
    return 0;
}