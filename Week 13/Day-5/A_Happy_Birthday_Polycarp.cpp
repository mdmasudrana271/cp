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

vector<int> beatyful()
{
    vector<int> beaty;
    for (int i = 1; i <= 9; i++)
    {
        int x = 0;
        for (int j = 1; j <= 9; j++)
        {
            x = x * 10 + i;
            beaty.push_back(x);
        }
    }
    sort(beaty.begin(), beaty.end());
    return beaty;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> beaty = beatyful();
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (auto x : beaty)
        {
            if (x <= n)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}