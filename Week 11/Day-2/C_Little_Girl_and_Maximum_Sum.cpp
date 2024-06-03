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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> d(n + 1);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        d[l]++;
        d[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }
    sort(d.begin(), d.end(), greater<int>());
    sort(v.begin(), v.end(), greater<int>());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * d[i] * v[i]);
    }
    cout << ans << endl;
    return 0;
}