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
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> evn, odd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evn.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    for (auto val : evn)
    {
        cout << val << " ";
    }
    for (auto val : odd)
    {
        cout << val << " ";
    }

    return 0;
}