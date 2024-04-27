#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e4;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw;
    for (int i = 1; i <= N; i++)
    {
        pw.push_back(pow(i, 3));
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool flag = false;
        for (int i = 0; i < N; i++)
        {
            if (pw[i] >= n)
            {
                break;
            }

            int l = 0, r = N - 1, mid;
            ll need = n - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}