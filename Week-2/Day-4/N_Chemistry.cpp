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
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        int cnt = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[st[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                cnt++;
            }
        }

        if (k >= cnt - 1 && k <= n)
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