#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            bool flag = false;
            for (int j = 2; j <= i + 1; j++)
            {
                if (v[i] % j != 0)
                {

                    flag = true;
                    break;
                }
            }

            ok &= flag;
        }
        if (ok)
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