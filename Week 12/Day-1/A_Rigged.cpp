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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        int ans = v[0].first;
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= ans && v[i].second >= v[0].second)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}