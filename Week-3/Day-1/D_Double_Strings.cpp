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
        vector<string> v(n);
        map<string, bool> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st[v[i]] = true;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int x = v[i].size();
            bool flag = false;
            for (int j = 0; j < x; j++)
            {
                string sx = v[i].substr(j, x);
                string sy = v[i].substr(0, j);
                if (st[sx] && st[sy])
                {
                    flag = true;
                }
            }
            if (flag)
                ans.push_back(1);
            else
                ans.push_back(0);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}