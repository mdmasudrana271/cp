#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int currSum(vector<int> &v)
{
    int sum = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        sum += abs(v[i] - v[i + 1]);
    }
    return sum;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = currSum(v);
        int mx = sum;
        for (int i = 0; i < n; ++i)
        {
            int temp = v[i];
            if (v[i] != 1)
            {
                v[i] = 1;
                int newSum = currSum(v);
                mx = max(mx, newSum);
                v[i] = temp;
            }
            if (v[i] != k)
            {
                v[i] = k;
                int newSum = currSum(v);
                mx = max(mx, newSum);
                v[i] = temp;
            }
        }
        cout << mx << endl;
    }
    return 0;
}