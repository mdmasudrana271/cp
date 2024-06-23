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
    string s, t;
    cin >> s;
    cin >> t;
    int sz = s.size();
    int tz = t.size();
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    int cnt = 0;
    int mn = min(sz, tz);
    for (int i = 0; i < mn; i++)
    {
        if (s[i] == t[i])
        {
            cnt++;
            // cout << s[i] << " " << t[i] << " ";
        }
        else
        {
            // cout << s[i] << " " << t[i];
            break;
        }
    }
    int ans = sz - cnt;
    ans += tz - cnt;
    cout << ans << endl;
    return 0;
}