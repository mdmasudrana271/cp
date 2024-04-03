#include <bits/stdc++.h>
#define ll long long int
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
        ll n;
        cin >> n;
        ll sum = 0;
        while (true)
        {
            if (n == 0)
            {
                break;
            }

            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }
    return 0;
}