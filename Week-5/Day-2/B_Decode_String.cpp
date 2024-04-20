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
        string str = "";
        for (int i = 0; i < n; i++)
        {
            if ((i + 2 < n && s[i + 2] == '0') && (i + 3 >= n || s[i + 3] != '0'))
            {
                int x = ((s[i] - '0') * 10 + (s[i + 1] - '0'));
                str.push_back((char)(96 + x));
                i += 2;
            }
            else
            {
                int x = (s[i] - '0');
                str.push_back((char)(96 + x));
            }
        }
        cout << str << endl;
    }
    return 0;
}