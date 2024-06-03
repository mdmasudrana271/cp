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
        vector<int> ans;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                ans.push_back(0);
            }
            else
            {
                if ((n / 2) % 2 == 0 || n == 1)
                {
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(-1);
                    n++;
                }
            }
            n /= 2;
        }

        cout << ans.size() << endl;
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}