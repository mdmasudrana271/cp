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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = min(abs(v[0] - v[1]), abs(v[n - 1] - v[n - 2]));
        for (int i = 1; i < n - 1; i++)
        {
            int x = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            ans = min(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}