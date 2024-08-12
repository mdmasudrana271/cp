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
        ll n, k;
        cin >> n >> k;
        ll x = n * k, y = n / 2;
        vector<ll> v(x);
        for (ll i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll sum = 0;
        for (ll i = x - 1 - y, j = 0; i >= 0 && j < k; j++, i -= y + 1)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}