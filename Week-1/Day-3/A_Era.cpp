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
        vector<int> v(n);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > i + 1)
            {
                int dif = v[i] - (i + 1);
                mx = max(mx, dif);
            }
        }
        cout << mx << endl;
    }
    return 0;
}