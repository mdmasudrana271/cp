#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                mn = min(mn, i + 1);
                mx = max(mx, i + 1);
            }
        }
        cout << mx - (mn - 1) << endl;
    }
    return 0;
}