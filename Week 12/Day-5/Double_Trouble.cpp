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
        vector<int> v(n), p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        vector<int> l(n, 0), r(n, 0);
        for (int i = 1; i < n; i++)
        {
            if (v[i] - p[i] <= v[i - 1])
            {
                l[i] = l[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] + p[i] >= v[i + 1])
            {
                r[i] = r[i + 1] + 1;
            }
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                int currp = r[i] + 1;
                if (currp == n || (currp + 1 + r[i + currp] == n))
                {
                    flag = true;
                    break;
                }
            }
            else if (i == n - 1)
            {
                int currp = l[i] + 1;
                if (currp == n || (currp + 1 + l[i - 1 - l[i]] == n))
                {
                    flag = true;
                    break;
                }
            }
            else if (2 + l[i] + r[i + 1] == n)
            {
                flag = true;
                break;
            }
        }
        if (2 + r[0] + l[n - 1] >= n)
        {
            flag = true;
        }
        if (2 + r[1] == n)
        {
            flag = true;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}