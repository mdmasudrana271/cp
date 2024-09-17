/*
Date: 17 September 2024
Time: 13:49:18
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
        int n, k;
        cin >> n >> k;
        if (k >= n - 1)
        {
            cout << 1 << endl;
        }
        else
        {
            // for (int i = 1; i <= n; i++)
            // {
            //     if (i * (n - i) <= k)
            //     {
            //         cout << i << endl;
            //         break;
            //     }
            // }
            cout << n << endl;
        }
    }
    return 0;
}