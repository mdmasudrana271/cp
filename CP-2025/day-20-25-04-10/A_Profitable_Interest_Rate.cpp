/*
Date: 10 April 2025
Time: 09:10:11
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
        int a, b;
        cin >> a >> b;

        if (a >= b)
        {
            cout << a << endl;
        }
        else
        {
            int rem = b - a;
            a -= rem;
            if (a > 0 && b - (2 * rem) <= a)
            {
                cout << a << endl;
            }
            else
            {

                cout << 0 << endl;
            }
        }
    }
    return 0;
}