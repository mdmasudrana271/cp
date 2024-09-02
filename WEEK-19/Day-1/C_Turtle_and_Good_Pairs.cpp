/*
Date: 02 September 2024
Time: 16:22:40
codeforces user_name: abdullahal304
codechef user_name: mdabdullahal30
Author: MASUD
*/
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
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto [x, y] : mp)
        {
            pq.push({y, x});
        }
        vector<string> v;
        int num = pq.top().first;
        char ch = pq.top().second;
        pq.pop();
        for (int i = 0; i < num; i++)
        {
            string x;
            x += ch;
            v.push_back(x);
        }
        int idx = 0;
        while (!pq.empty())
        {
            int num = pq.top().first;
            char ch = pq.top().second;
            while (num > 0)
            {
                v[idx] += ch;
                num--;
                idx = (idx + 1) % v.size();
            }
            pq.pop();
        }
        string ans = "";
        for (auto c : v)
        {
            ans += c;
        }
        cout << ans << endl;
    }
    return 0;
}