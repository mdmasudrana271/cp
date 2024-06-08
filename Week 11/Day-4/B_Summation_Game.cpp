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
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> pref(n + 1);
        pref[1] = v[1];
        for (int i = 2; i <= n; i++)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        int ans = INT_MIN;
        for (int i = n; i >= 0; i--)
        {
            int idx = n - i;
            if (idx > k)
            {
                break;
            }
            int p = min(x, i);
            int sum = (pref[i - p] - (pref[i] - pref[i - p]));
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}