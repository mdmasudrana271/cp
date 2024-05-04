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
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        auto ok = [&](int mid)
        {
            ll cp = 0, cnt = 0;
            for (int i = 0; i < k; i++)
            {

                if (cp < v[i])
                {
                    cp += n - v[i];
                    cnt++;
                }
            }
            return cnt >= mid;
        };

        int l = 0, r = n, mid, ans = 0;
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
    }
    return 0;
}