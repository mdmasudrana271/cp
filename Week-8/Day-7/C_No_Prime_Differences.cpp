/*
Date: 24 August 2024
Time: 06:31:34
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n + 1, vector<int>(m + 1));
        int val = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                v[i][j] = val;
                val++;
            }
        }
        for (int i = 2; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}