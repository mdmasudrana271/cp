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
        string s;
        cin >> s;
        int l = 0, r = 0, u = 0, d = 0;
        if (s[0] == '1')
        {
            l = -10;
        }
        if (s[1] == '1')
        {
            r = 10;
        }
        if (s[2] == '1')
        {
            u = 10;
        }
        if (s[3] == '1')
        {
            d = -10;
        }
        int ans = (r - l + 1) * (u - d + 1);
        cout << ans << endl;
    }
    return 0;
}