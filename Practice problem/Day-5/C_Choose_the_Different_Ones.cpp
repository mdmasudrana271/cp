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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (mp[b[i]] == 1)
            {
                mp[b[i]] = -1;
            }
            else if (mp[b[i]] == 0)
            {

                mp[b[i]] = 2;
            }
        }
        int x = k / 2, y = k / 2;
        for (int i = 1; i <= k; i++)
        {
            if (mp[i] == 1)
            {
                x--;
            }
            if (mp[i] == 2)
            {
                y--;
            }
            if (mp[i] == 0)
            {
                x = -1;
            }
        }
        if (x >= 0 && y >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}