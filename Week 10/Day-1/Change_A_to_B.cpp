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
        int a, b, k;
        cin >> a >> b >> k;
        int ans = 0;
        while (true)
        {
            if (b % k == 0 && b / k >= a)
            {
                b /= k;
                ans++;
            }
            else if (b % k == 0)
            {
                ans += b - a;
                break;
            }
            else
            {
                ans += b % k;
                b -= b % k;
            }
        }
        cout << ans << endl;
    }

    return 0;
}