/*
Date: 10 September 2024
Time: 12:07:41
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

int getsum(int a, int n)
{
    int sum = 2 * a + n - 1;
    sum *= n;
    sum /= 2;
    return sum;
}

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
        int l = 0, r = n, ans = 1e18, mid;
        while (l <= r)
        {
            mid = (l + r) >> 1;
            int x = getsum(k, mid), y = getsum(k + mid, n - mid);

            ans = min(ans, abs(x - y));
            if (y >= x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}