#include <bits/stdc++.h>
#define ll long long int
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
        int n = s.size();
        int cnt = 0;
        if (n % 2 == 0 && n > 2)
        {
            for (int i = 1; i < n / 2; i++)
            {
                if (s[i] != s[i - 1])
                {
                    cnt++;
                }
            }
        }
        else if (n % 2 != 0 && n > 3)
        {
            for (int i = 1; i < n / 2; i++)
            {
                if (s[i] != s[i - 1])
                {
                    cnt++;
                }
            }
        }
        if (cnt > 0)
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