/*
Date: 26 August 2024
Time: 18:01:22
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

void solve()
{
    string s, t;
    cin >> s >> t;
    if (s.size() == t.size())
    {
        if (s == t)
        {
            cout << s << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        return;
    }

    if (s.size() > t.size())
    {
        swap(s, t);
    }
    int n = s.size(), m = t.size();
    int l = lcm(n, m);
    string ans = "";
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        ans += (char)s[k];
        k++;
        k %= n;
    }

    k = 0;
    for (int i = 0; i < l; i++)
    {
        if (ans[i] != t[k])
        {
            cout << -1 << endl;
            return;
        }
        k++;
        k %= m;
    }
    cout << ans << endl;
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
        solve();
    }
    return 0;
}