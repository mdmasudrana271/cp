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
        string x = {"Timur"};
        if (n > 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            map<char, int> mp;
            for (int i = 0; i < x.size(); i++)
            {
                mp[s[i]]++;
            }
            bool flag = true;
            for (int i = 0; i < x.size(); i++)
            {
                if (mp[x[i]] > 1 || mp[x[i]] < 1)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}