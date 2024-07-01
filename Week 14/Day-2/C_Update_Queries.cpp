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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> v;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        string t;
        cin >> t;
        sort(t.begin(), t.end());
        int idx = 0;
        for (auto val : v)
        {
            s[val - 1] = t[idx++];
        }
        cout << s << endl;
    }
    return 0;
}