/*
Date: 17 September 2024
Time: 14:41:49
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

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = a;
        int rem = b % 3;
        if (rem == 0)
        {
            ans += b / 3;
            if (c % 3 == 0)
            {
                ans += c / 3;
            }
            else
            {
                ans += c / 3 + 1;
            }
            cout << ans << endl;
        }
        else if (c >= 3 - rem)
        {
            b += (3 - rem);
            c -= (3 - rem);
            ans += b / 3;
            if (c % 3 == 0)
            {
                ans += c / 3;
            }
            else
            {
                ans += c / 3 + 1;
            }
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}