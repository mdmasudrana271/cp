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
        vector<int> v(n), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = n - 1;
        while (v[l] == a[l])
        {
            l++;
        }
        while (v[r] == a[r])
        {
            r--;
        }
        while (l > 0 && a[l] >= a[l - 1])
        {
            l--;
        }
        while (r < n - 1 && a[r] <= a[r + 1])
        {
            r++;
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}