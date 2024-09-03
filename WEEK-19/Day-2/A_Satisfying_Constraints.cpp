/*
Date: 03 September 2024
Time: 10:30:11
codeforces user_name: abdullahal304
codechef user_name: mdabdullahal30
Author: MASUD
*/
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
            // int x, y;
            // cin >> x >> y;
            // v.push_back({x, y});
            cin >> v[i].first >> v[i].second;
        }
        int l = INT_MIN, r = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first == 1)
            {
                l = max(l, v[i].second);
            }
            if (v[i].first == 2)
            {
                r = min(r, v[i].second);
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first == 3)
            {
                if (v[i].second >= l && v[i].second <= r)
                {
                    cnt++;
                }
            }
        }
        if (r < l)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = ((r - l) + 1) - cnt;
        cout << ans << endl;
    }
    return 0;
}
