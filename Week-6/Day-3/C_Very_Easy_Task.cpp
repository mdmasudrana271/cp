#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](ll m)
    {
        if (m < min(x, y))
        {
            return false;
        }
        int cnt = 1;
        m -= min(x, y);
        cnt += m / x + m / y;
        return cnt >= n;
    };

    int l = 0, r = max(x, y) * n, mid, ans = 0;
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

    cout << ans << endl;

    return 0;
}