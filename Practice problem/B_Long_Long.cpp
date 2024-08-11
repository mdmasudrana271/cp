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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        int cnt = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += abs(v[i]);
            if (v[i] > 0)
            {
                flag = true;
            }
            if (v[i] < 0 && flag)
            {
                cnt++;
                flag = false;
            }
        }

        cout << sum << " " << cnt << endl;
    }
    return 0;
}