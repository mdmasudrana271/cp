#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int nb, ns, nc, pb, ps, pc, B = 0, S = 0, C = 0;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    ll ruble;
    cin >> ruble;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            B++;
        }
        if (s[i] == 'S')
        {
            S++;
        }
        if (s[i] == 'C')
        {
            C++;
        }
    }

    auto ok = [&](ll mid)
    {
        ll needb, needs, needc, costb, costs, costc, totalcost;
        needb = B * mid;
        needs = S * mid;
        needc = C * mid;
        costb = (nb <= needb) ? (needb - nb) * pb : 0;
        costs = (ns <= needs) ? (needs - ns) * ps : 0;
        costc = (nc <= needc) ? (needc - nc) * pc : 0;
        totalcost = costb + costs + costc;
        // cout << "costb :" << costb << " "
        //      << "costs :" << costs << " "
        //      << "costc :" << costc << " "
        //      << "total :" << totalcost << " "
        //      << "mid :" << mid << endl;
        return totalcost <= ruble;
    };

    ll l = 0, r = 1e12 * 100, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
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