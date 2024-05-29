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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string st = s;
    reverse(st.begin(), st.end());
    map<char, vector<int>> pos_s, pos_st;

    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_st[st[i]].push_back(i);
    }
    vector<int> per(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            per[pos_st[ch][i]] = pos_s[ch][i];
        }
    }
    pbds<int> p;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(per[i]);
        p.insert(per[i]);
    }
    cout << ans << endl;
    return 0;
}