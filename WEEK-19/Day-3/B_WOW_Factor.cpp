/*
Date: 05 September 2024
Time: 23:05:35
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
    string s;
    cin >> s;
    ll cnt = 0, mx = 0, ans = 0;
    for (int i = s.size() - 2; i >= 0; i--)
    {
        if (s[i] == 'v' && s[i + 1] == 'v')
        {
            cnt++;
            ans += mx;
        }
        else if (s[i] == 'o')
        {
            mx = mx + cnt;
        }
    }
    cout << ans << endl;
    return 0;
}