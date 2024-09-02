/*
Date: 01 September 2024
Time: 14:29:16
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
        if (n == 1)
        {
            cout << k << endl;
            continue;
        }
        if (n == k)
        {
            cout << 1 << endl;
            continue;
        }
        if (n < k)
        {
            int a = k / n;
            int b = k % n;
            if (b != 0)
            {

                a++;
            }
            cout << a << endl;
            continue;
        }
        else
        {
            int c = n / k;
            int d = n % k;
            if (d != 0)
                c++;
            k *= c;
            int a = k / n;
            int b = k % n;
            if (b != 0)
            {

                a++;
            }
            cout << a << endl;
            continue;
        }
    }
    return 0;
}