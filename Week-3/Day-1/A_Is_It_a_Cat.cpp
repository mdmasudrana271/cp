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
        string str = "meow";
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        auto it = unique(s.begin(), s.end());
        s.erase(it, s.end());
        if (s == str)
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