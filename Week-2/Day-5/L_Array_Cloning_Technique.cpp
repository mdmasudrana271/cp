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
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            mx = max(mx, mp[v[i]]);
        }
        int cnt = 0, cln = 0;
        int need = n - mx;

        while (mx < n)
        {
            cln++;
            cnt += mx;
            need -= mx;
            mx *= 2;
        }
        if (need < 0)
        {
            cnt += need;
        }
        cout << cln + cnt << endl;
    }
    return 0;
}