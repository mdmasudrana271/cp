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
      ll n, k, q;
      cin >> n >> k >> q;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }
      ll l = 0, r = 0, ans = 0;
      while (r < n)
      {
         if (v[r] > q)
         {

            r++;
            l = r;
         }
         else if (r - l + 1 >= k)
         {
            ans += (r - l + 1 - k) + 1;
            r++;
         }
         else
         {
            r++;
         }
      }

      cout << ans << endl;
   }

   return 0;
}