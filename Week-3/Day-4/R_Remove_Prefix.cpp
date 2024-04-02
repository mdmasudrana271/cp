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
        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.find(v[i]) == st.end())
            {
                st.insert(v[i]);
            }
            else
            {
                break;
            }
        }

        cout << n - st.size() << endl;
    }
    return 0;
}