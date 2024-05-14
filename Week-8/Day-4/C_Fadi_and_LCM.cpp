#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int x = INT_MIN;

    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0 && gcd(i, n / i) == 1)
            {
                x = max(x, i);
            }
        }
        if (lcm(x, n / x) == n)
        {
            cout << x << " " << n / x << endl;
        }
    }
    return 0;
}