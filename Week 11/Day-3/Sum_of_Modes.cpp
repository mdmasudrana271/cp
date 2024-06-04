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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = n * (n + 1) / 2;
        unordered_map<ll, ll> mp;
        mp[0] = 1;
        ll z = 0, o = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
            if (mp.find(z - o) != mp.end())
            {
                ans += mp[z - o];
                mp[z - o]++;
                continue;
            }
            mp[z - o] = 1;
        }
        cout << ans << endl;
    }

    return 0;
}