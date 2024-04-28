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
        ll l = 0, r = n * k, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            ll cnt = mid - (mid / n);
            if (cnt >= k)
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
    }
    return 0;
}