/*
Date: 30 March 2025
Time: 12:02:13
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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int div = n / sum;
        if (n % sum == 0)
        {
            cout << div * 3 << endl;
        }
        else
        {
            int rem = n % sum;
            if (rem <= a)
                cout << (div * 3) + 1 << endl;
            else if (rem <= a + b)
                cout << (div * 3) + 2 << endl;
            else if (rem <= a + b + c)
                cout << (div * 3) + 3 << endl;
        }
    }
    return 0;
}