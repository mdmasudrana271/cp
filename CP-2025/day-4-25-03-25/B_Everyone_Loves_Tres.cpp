/*
Date: 25 March 2025
Time: 10:24:07
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
        if (n == 1 || n == 3)
        {
            cout << -1 << endl;
        }
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << "3";
            }
            cout << "66" << endl;
        }
        else
        {
            for (int i = 0; i < n - 5; i++)
            {
                cout << "3";
            }
            cout << "36366" << endl;
        }
    }
    return 0;
}