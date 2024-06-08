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

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     if (v[0] == 1)
//     {
//         cout << "Yes" << endl;
//         return;
//     }
//     ll x, cnt = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         if (v[i] % v[0] == 0)
//         {
//             // cnt++;
//         }
//         else
//         {

//             x = i;
//         }
//     }
//     for (ll i = 0; i < n; i++)
//     {
//         if (v[i] % v[0] == 0 || v[i] % v[x] == 0)
//         {
//             cnt++;
//         }
//         else
//         {
//             cout << "No" << endl;
//             return;
//         }
//     }
//     cnt == n ? cout << "Yes" << endl : cout << "No" << endl;
// }
int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % v[0] != 0)
            {
                a.push_back(v[i]);
            }
        }
        bool flag = true;
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] % a[0] != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}