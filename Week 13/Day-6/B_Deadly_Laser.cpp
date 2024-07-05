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
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        bool flag = false;
        if (x + d >= n && y + d >= m)
        {
            flag = true;
        }
        if (x - d <= 1 && y - d <= 1)
        {
            flag = true;
        }
        if (x - d <= 1 && x + d >= n)
        {
            flag = true;
        }
        if (y - d <= 1 && y + d >= m)
        {
            flag = true;
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n + m - 2 << endl;
        }
    }
    return 0;
}