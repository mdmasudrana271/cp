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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pbds<pair<int, int>> p;
    int l = 0, r = 0;
    while (r < n)
    {
        p.insert({v[r], r});
        if (r - l + 1 == k)
        {
            int idx = k / 2;
            if (k % 2 == 0)
            {
                idx--;
            }
            auto it = p.find_by_order(idx);
            cout << it->first << " ";
            p.erase({v[l], l});
            l++;
        }
        r++;
    }
    return 0;
}