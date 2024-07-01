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
        if (n % 2 == 0)
        {
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1;
            }
            cout << endl;
        }
        else
        {
            n--;
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << n + 1 << endl;
        }
    }
    return 0;
}