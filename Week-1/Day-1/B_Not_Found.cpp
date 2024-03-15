#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            char c = i + 'a';
            cout << c;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "None";
    }
    return 0;
}