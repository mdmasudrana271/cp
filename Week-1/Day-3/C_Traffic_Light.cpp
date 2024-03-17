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
        char x;
        cin >> n >> x;
        string s;
        cin >> s;
        if (x == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 1;
            for (char i = 0; i < n + 1; i++)
            {
                cnt++;
                if (s[i] == 'g')
                {
                    break;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}