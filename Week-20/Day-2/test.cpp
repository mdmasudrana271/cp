/*
Date: 10 September 2024
Time: 12:55:19
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
        ll n, k;
        cin >> n >> k;
        ll l = k, r = n + k - 1;
        ll presum = (l - 1) * l / 2;
        ll totalsum = r * (r + 1) / 2;
        ll midsum = totalsum - presum;
        ll half = midsum / 2, num, sum;
        while (l <= r)
        {
            ll mid = (l + r) >> 1;
            ll cursum = mid * (mid + 1) / 2;
            ll nowhave = cursum - presum;
            if (nowhave <= half)
            {
                num = mid;
                sum = nowhave;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        ll ans1 = midsum - sum;
        ll tmp = ans1;
        ans1 = abs(ans1 - sum);
        num++;
        ll ans2 = abs(sum + num - tmp + num);
        cout << min(ans1, ans2) << endl;
    }

    return 0;
}