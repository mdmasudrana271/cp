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

ll sum(ll n)
{
    return n * (n + 1) / 2;
}
int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 0;
        if (a > b)
        {
            cout << a * n << endl;
        }
        else
        {
            ll ans = sum(b) - sum(max(b - n, a));
            ans += a * (n - (b - (max(b - n, a))));
            cout << ans << endl;
        }
    }
    return 0;
}