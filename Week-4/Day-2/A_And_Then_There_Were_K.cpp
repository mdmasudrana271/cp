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
        int n;
        cin >> n;
        int cnt;
        while (n != 0)
        {
            cnt = n - 1;
            n = n & (n - 1);
        }

        cout << cnt << endl;
    }
    return 0;
}