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
        string s;
        cin >> s;
        deque<pair<int, char>> up, low;
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]) && s[i] != 'B')
            {
                up.push_back({i, s[i]});
            }
            else if (islower(s[i]) && s[i] != 'b')
            {
                low.push_back({i, s[i]});
            }
            if (s[i] == 'B')
            {
                if (!up.empty())
                {
                    up.pop_back();
                }
            }
            else if (s[i] == 'b')
            {
                if (!low.empty())
                {
                    low.pop_back();
                }
            }
        }
        // string rslt = "";
        vector<pair<int, char>> ans;
        for (pair<int, char> c : up)
        {
            ans.push_back(c);
        }
        for (pair<int, char> c : low)
        {
            ans.push_back(c);
        }
        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].second;
        }
        cout << "\n";
    }
    return 0;
}