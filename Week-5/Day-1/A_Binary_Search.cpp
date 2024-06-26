#include <bits/stdc++.h>
using namespace std;

// if (key == a[mid]) {
//             idx = mid;
//             break;
//         }
//         else if (key < a[mid]) {
//             r = mid - 1;
//         }
//         else {
//             l = mid + 1;
//         }

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int q;
        cin >> q;
        int l = 0, r = n - 1, mid, idx = -1;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (q == v[mid])
            {
                idx = mid;
                break;
            }
            else if (q < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (idx == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}