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
        // (a1 == a2 and b1 + b2 == a1) or
        //     (a1 == b2 and b1 + a2 == a1) or
        //     (b1 == a2 and a1 + b2 == b1) or
        //     (b1 == b2 and a1 + a2 == b1);

        int a1, b1, a2, b2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if ((a1 == a2 && b1 + b2 == a1) || (a1 == b2 && b1 + a2 == a1) || (b1 == a2 && a1 + b2 == b1) || (b1 == b2 && a1 + a2 == b1))
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