/*
Date: 16 September 2024
Time: 20:17:02
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
        cin >> k >> n;
        int dif = 1;
        vector<int> v = {1};
        // v.push_back(1);
        for (int i = 2; i <= k; i++)
        {
            int nxt = v.back() + dif;
            int remel = n - nxt;
            int rempl = k - i;
            if (remel >= rempl)
            {
                v.push_back(nxt);
                dif++;
            }
            else
            {
                v.push_back(v.back() + 1);
            }
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}