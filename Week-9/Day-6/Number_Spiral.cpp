#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
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
        ll x, y;
        cin >> y >> x;
        if (y > x)
        {
            ll ans = (y - 1) * (y - 1);
            ll add = 0;
            if (y % 2 != 0)
            {
                add = x;
            }
            else
            {
                add = 2 * y - x;
            }
            cout << ans + add << endl;
        }
        else
        {
            ll ans = (x - 1) * (x - 1);
            ll add = 0;
            if (x % 2 == 0)
            {
                add = y;
            }
            else
            {
                add = 2 * x - y;
            }
            cout << ans + add << endl;
        }
    }
    return 0;
}