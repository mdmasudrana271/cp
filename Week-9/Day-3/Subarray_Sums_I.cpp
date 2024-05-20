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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0, l = 0, r = 0, cnt = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum > x && l <= r)
        {
            sum -= v[l];
            l++;
        }
        if (sum == x)
        {
            cnt++;
        }

        r++;
    }
    cout << cnt << endl;
    return 0;
}