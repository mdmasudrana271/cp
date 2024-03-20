#include <bits/stdc++.h>
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
    int k;
    cin >> k;
    vector<long long> ans;
    queue<int> negq, q;
    int l = 0, r = 0;
    while (r < n)
    {
        q.push(v[r]);
        if (v[r] < 0)
        {
            negq.push(v[r]);
        }
        if (r - l + 1 == k)
        {
            if (!negq.empty())
            {
                ans.push_back(negq.front());
            }
            else
            {
                ans.push_back(0);
            }
            if (negq.front() == q.front())
            {
                negq.pop();
                q.pop();
            }
            else
            {
                q.pop();
            }
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}