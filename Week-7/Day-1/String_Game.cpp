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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        stack<char> st;
        for (auto c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
                cnt++;
            }
            else
            {
                st.push(c);
            }
        }

        if (cnt % 2 != 0)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }
    }
    return 0;
}