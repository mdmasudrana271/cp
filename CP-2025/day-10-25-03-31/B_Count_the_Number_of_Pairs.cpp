/*
Date: 31 March 2025
Time: 07:15:33
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
        string s;
        cin >> s;

        vector<int> big(26, 0), small(26, 0);

        for (char c : s)
        {
            if (islower(c))
                small[c - 'a']++;
            else
                big[c - 'A']++;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++)
        {
            int pairs = min(small[i], big[i]);
            ans += pairs;
            small[i] -= pairs;
            big[i] -= pairs;

            int additionalPairs = min(k, (small[i] + big[i]) / 2);
            k -= additionalPairs;
            ans += additionalPairs;
        }

        cout << ans << "\n";
    }
    return 0;
}