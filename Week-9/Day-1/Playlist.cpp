#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<int> st;
    int cnt = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        while (st.find(v[r]) != st.end())
        {
            st.erase(v[l]);
            l++;
        }
        st.insert(v[r]);
        cnt = max(cnt, (r - l + 1));
        r++;
    }
    cout << cnt << endl;
    return 0;
}