#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if ((a > b * 2 || b > a * 2) || (a == 2 && b == 2))
        {
            cout << "NO" << endl;
            continue;
        }
        ll x = a % 3;
        ll y = b % 3;
        if ((x == 0 && y == 0) || (x == 1 && y == 2) || (x == 2 && y == 1))
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