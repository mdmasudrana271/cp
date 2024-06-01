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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin() + 1, v.end());
        pbds<ll> p;
        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            p.insert(v[i].second);
        }
        for (int i = 1; i <= n; i++)
        {
            cnt += p.order_of_key(v[i].second);
            p.erase(v[i].second);
        }
        cout << cnt << endl;
    }
    return 0;
}