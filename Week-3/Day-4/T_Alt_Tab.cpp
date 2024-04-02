#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<string> st;
    for (int i = n - 1; i >= 0; i--)
    {
        string s = v[i];
        if (st.find(s) == st.end())
        {
            int sz = s.size();
            string x = s.substr(sz - 2, sz - 1);
            cout << x;
            st.insert(s);
        }
    }

    return 0;
}