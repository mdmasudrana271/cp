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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<ll> st;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0 && !st.empty())
            {
                int x = st.top();
                st.pop();
                sum += x + v[i];
            }
            else
            {
                st.push(v[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}