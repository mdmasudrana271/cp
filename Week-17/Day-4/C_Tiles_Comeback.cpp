/*
Date: 24 August 2024
Time: 22:39:42
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = v.front(), y = v.back();
        int l = k, r = k;
        for (auto val : v)
        {
            if (l == 0 && r == 0)
                break;
            if (l > 0)
            {
                if (val == x)
                    l--;
            }
            else
            {
                if (val == y)
                    r--;
            }
        }
        if (x == y)
        {
            if (l == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (l == 0 && r == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}