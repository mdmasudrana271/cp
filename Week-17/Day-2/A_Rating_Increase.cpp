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
        string s;
        cin >> s;
        string a, b;
        a = s[0];
        bool flag = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != '0' || flag)
            {
                b += s[i];
                flag = true;
            }
            else
            {
                a += s[i];
            }
        }
        if (b.size() == 0)
        {
            b += '0';
        }
        int x = stoi(a), y = stoi(b);
        if (y > x && x != 0 && y != 0)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}