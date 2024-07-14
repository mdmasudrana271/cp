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
        string s;
        cin >> s;
        if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
        {
            cout << "YES" << endl;
        }
        else
        {
            if (s.front() == 'b' && s[1] == 'a')
            {
                swap(s.front(), s[1]);
                if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (s[1] == 'c' && s.back() == 'b')
            {
                cout << "YES" << endl;
            }
            else if (s.back() == 'b' && s[1] == 'c')
            {
                swap(s.front(), s[1]);
                if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (s.front() == 'c' && s.back() == 'a')
            {
                swap(s.front(), s.back());
                if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            };
        }
    }
    return 0;
}