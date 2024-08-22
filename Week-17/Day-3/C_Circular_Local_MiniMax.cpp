/*
Date: 22 August 2024
Time: 16:17:55
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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        vector<int> a;
        for (int i = 0, j = n / 2; i < n / 2; i++, j++)
        {
            a.push_back(v[i]);
            a.push_back(v[j]);
        }
        // a.push_back(v[0]);
        // a.push_back(v[1]);
        bool flag = true;
        for (int i = 1; i < a.size() - 1; i++)
        {
            if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}