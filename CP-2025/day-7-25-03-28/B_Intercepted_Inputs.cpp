/*
Date: 28 March 2025
Time: 13:49:24
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
        int k;
        cin >> k;
        vector<int> v(k);
        vector<int> freq(k + 1, 0);

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        pair<int, int> ans = {-1, -1};

        for (int i = 1; i * i <= (k - 2); i++)
        {
            if (i * i == (k - 2))
            {
                if (freq[i] > 1)
                {
                    ans = {i, i};
                }
            }
            else if ((k - 2) % i == 0)
            {
                int j = (k - 2) / i;
                if (freq[i] > 0 && freq[j] > 0)
                {
                    ans = {i, j};
                }
            }
        }

        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}