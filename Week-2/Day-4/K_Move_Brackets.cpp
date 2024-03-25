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
        string st;
        cin >> st;
        stack<char> stc;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == '(')
            {
                stc.push(st[i]);
            }
            else
            {
                if (stc.empty())
                {
                    cnt++;
                }
                else if (st[i] == ')' && stc.top() == '(')
                {
                    stc.pop();
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}