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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        multiset<int> need;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] != b[i])
            {
                need.insert(b[i]);
            }
        }
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == v[x - 1])
            {
                flag = true;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = x - 1; i >= 0; i--)
        {
            int y = v[i];
            if (need.find(y) != need.end())
            {
                need.erase(need.find(y));
            }
        }
        if (need.empty())
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