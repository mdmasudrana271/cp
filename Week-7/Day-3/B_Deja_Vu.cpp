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
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(q);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }

        set<int> st;

        for (int i = 0; i < q; i++)
        {
            if (st.count(b[i]))
            {
                continue;
            }
            st.insert(b[i]);
            for (int j = 0; j < n; j++)
            {
                if (a[j] % (1 << b[i]) == 0)
                {
                    a[j] += (1 << b[i] - 1);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}