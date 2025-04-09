/*
Date: 08 April 2025
Time: 12:24:53
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
        for (int i = 1; i <= a * 2; i += 2)
        {
            cout << i;
        }
        for (int i = 1; i <= b * 2; i += 2)
        {
            cout << char('A' + i);
        }
        for (int i = 1; i <= c * 2; i += 2)
        {
            cout << char('a' + i);
        }
        cout << endl;
    }
    return 0;
}