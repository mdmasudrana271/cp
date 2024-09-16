/*
Date: 16 September 2024
Time: 17:22:19
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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            if (v[0] % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            continue;
        }
        int o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                e++;
            }
            if (v[i] % 2 != 0)
            {
                o++;
            }
        }
        if (!o)
        {
            cout << "No" << endl;
            continue;
        }

        if (!(o % 2))
            o--;
        if (o >= x)
        {
            if (x % 2)
                x = 0;
            else
                x = 1;
        }
        else
            x -= o;

        if (x <= e)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}