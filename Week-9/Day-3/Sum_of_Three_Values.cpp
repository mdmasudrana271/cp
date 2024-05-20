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
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = {x, i + 1};
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int target = x - v[i].first;
        int l = 0, r = n - 1;
        while (l != r)
        {
            int sum = v[l].first + v[r].first;
            if (sum == target && l != i && r != i)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
                return 0;
            }
            if (sum > target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}