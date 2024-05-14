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
        map<int, int> mp;
        for (int i = 2; i <= sqrtl(b); i++)
        {
            if (b % i == 0)
            {
                while (b % i == 0)
                {
                    mp[i]++;
                    b /= i;
                }
            }
        }
        if (b > 1)
        {
            mp[b]++;
        }

        bool flag = true;

        for (auto [x, y] : mp)
        {
            if (a % x != 0)
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