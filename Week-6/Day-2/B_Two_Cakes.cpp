#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    int l = 1, r = min(a, b), ans = 1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a / mid + b / mid >= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}