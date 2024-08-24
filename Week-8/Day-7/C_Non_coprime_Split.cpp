/*
Date: 24 August 2024
Time: 06:50:40
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

int prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
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
        int l, r;
        cin >> l >> r;
        if (l <= 3 && r <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (r > l)
        {
            if (r % 2 != 0)
            {
                r--;
            }
            cout << r / 2 << " " << r / 2 << endl;
            continue;
        }
        if (prime(l) == l)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << prime(l) << " " << l - prime(l) << endl;
        }
    }
    return 0;
}