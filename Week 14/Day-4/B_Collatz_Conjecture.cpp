#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        while (x > 1)
        {
            ll p = y - (x % y);
            if (p >= k)
            {
                x += k;
                k = 0;
            }
            else
            {
                k -= p;
                x += p;
            }
            while (x % y == 0)
            {
                x /= y;
            }
            if (k <= 0)
            {
                break;
            }
        }
        if (k > 0)
        {
            k = k % (y - 1);
            x += k;
            while (x % y == 0)
            {
                x /= y;
            }
        }
        cout << x << endl;
    }
    return 0;
}