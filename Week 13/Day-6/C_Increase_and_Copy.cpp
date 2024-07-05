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

// if (nroot * nroot >= n)
// {
//     cout << 2 * nroot - 2 << "\n";
// }
// else if ((nroot + 1) * nroot >= n)
// {
//     cout << 2 * nroot - 1 << "\n";
// }
// else
// {
//     cout << 2 * nroot << "\n";
// }

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int x = floor(sqrt(n));
        if (x * x >= n)
        {
            cout << 2 * x - 2 << endl;
        }
        else if ((x + 1) * x >= n)
        {
            cout << 2 * x - 1 << endl;
        }
        else
        {
            cout << 2 * x << endl;
        }
    }
    return 0;
}