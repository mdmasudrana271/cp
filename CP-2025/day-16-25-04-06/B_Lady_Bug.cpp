/*
Date: 06 April 2025
Time: 09:30:22
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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                cnt2 += a[i] == '0';
                cnt1 += b[i] == '0';
            }
            else
            {
                cnt1 += a[i] == '0';
                cnt2 += b[i] == '0';
            }
        }

        if (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2)
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