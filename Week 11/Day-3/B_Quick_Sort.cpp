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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> s(v);
        sort(s.begin(), s.end());
        if (is_sorted(v.begin(), v.end()))
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == cnt + 1)
            {
                cnt++;
            }
        }
        int x = n - cnt;
        if (x % k == 0)
        {
            cout << x / k << endl;
        }
        else
        {
            cout << (x / k) + 1 << endl;
        }
    }
    return 0;
}