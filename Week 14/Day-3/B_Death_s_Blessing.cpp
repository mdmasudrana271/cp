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
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                ans += a[i];
                break;
            }
            else
            {
                if (a[i] + (a[i + 1] + b[i]) <= a[i + 1] + (a[i] + b[i + 1]))
                {
                    ans += a[i];
                    a[i + 1] += b[i];
                }
                else
                {
                    ans += a[i + 1];
                    a[i] += b[i + 1];
                    swap(a[i], a[i + 1]);
                    swap(b[i], b[i + 1]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}