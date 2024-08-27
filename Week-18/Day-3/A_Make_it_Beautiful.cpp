/*
Date: 27 August 2024
Time: 21:44:18
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
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        sort(v.rbegin(), v.rend());
        if (s.size() == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << v.front() << " ";
        int l = n;
        if (v[1] == v[0])
        {
            cout << v[n - 1] << " ";
            l--;
        }
        for (int i = 1; i < l; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}