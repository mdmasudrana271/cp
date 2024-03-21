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
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        set<int> green_signal;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                green_signal.insert(i + 1);
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                auto LB = green_signal.lower_bound(i + 1);
                // auto UP = green_signal.upper_bound(i);
                if (LB != green_signal.end())
                {
                    int diff = (*LB - (i + 1));
                    ans = max(ans, diff);
                }
                else
                {
                    int x = n - (i + 1), y = *green_signal.begin();
                    ans = max(ans, x + y);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}