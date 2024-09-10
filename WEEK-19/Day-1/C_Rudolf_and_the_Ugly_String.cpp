/*
Date: 02 September 2024
Time: 16:57:50
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
        string ss;
        cin >> ss;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((ss[i] == 'p' && ss[i + 1] == 'i' && ss[i + 2] == 'e') || (ss[i] == 'm' && ss[i + 1] == 'a' && ss[i + 2] == 'p'))
            {
                cnt++;
                ss[i + 2] = '$';
            }
        }

        cout << cnt << endl;
    }
    return 0;
}