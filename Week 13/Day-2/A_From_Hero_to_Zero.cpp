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
        ll n, k;
        cin >> n >> k;
        ll cnt = 0;
        while (n != 0)
        {
            if (k > n)
            {
                cnt += n;
                break;
            }
            if (n % k == 0)
            {
                n /= k;
                cnt++;
            }
            else
            {
                cnt += n % k;
                n -= n % k;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}