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
        ll k, n, m;
        cin >> k >> n >> m;
        vector<ll> v1(n), v2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        bool flag = false;
        ll idx1 = 0, idx2 = 0;
        vector<ll> ans;
        while (n > idx1 || m > idx2)
        {
            if (v1[idx1] == 0 && idx1 < n)
            {
                ans.push_back(0);
                idx1++;
                k++;
            }
            else if (v2[idx2] == 0 && idx2 < m)
            {
                ans.push_back(0);
                idx2++;
                k++;
            }
            else if (v1[idx1] <= k && v1[idx1] != 0 && idx1 < n)
            {
                ans.push_back(v1[idx1]);
                idx1++;
            }
            else if (v2[idx2] <= k && v2[idx2] != 0 && idx2 < m)
            {
                ans.push_back(v2[idx2]);
                idx2++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}