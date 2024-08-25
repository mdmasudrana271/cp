/*
Date: 25 August 2024
Time: 16:25:43
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
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even.push_back(i + 1);
            }
            else
            {
                odd.push_back(i + 1);
            }
        }
        if (odd.size() >= 3)
        {
            cout << "YES" << endl;
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        }
        else if (even.size() >= 2 && odd.size() >= 1)
        {
            cout << "YES" << endl;
            cout << even[0] << " " << even[1] << " " << odd[0] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}