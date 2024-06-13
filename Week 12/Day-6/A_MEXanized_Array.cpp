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
        int n, mex, mx, sum = 0;
        cin >> n >> mex >> mx;
        if (mex - mx > 1 || n < mex)
        {
            cout << -1 << endl;
            continue;
        }
        if (mex == mx)
        {
            mx--;
        }
        for (int i = 0; i < n; i++)
        {
            if (mex > i)
            {
                sum += i;
            }
            else
            {
                sum += mx;
            }
        }
        cout << sum << endl;
    }
    return 0;
}