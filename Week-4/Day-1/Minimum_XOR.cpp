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
        vector<int> v(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x ^= v[i];
        }
        int ans = x;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, (x ^ v[i]));
        }
        cout << ans << endl;
    }
    return 0;
}