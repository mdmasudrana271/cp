//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int t = txt.size();
        int p = pat.size();
        vector<int> freqp(26, 0);
        vector<int> freqt(26, 0);

        for (int i = 0; i < p; i++)
        {
            freqp[pat[i] - 'a']++;
            freqt[txt[i] - 'a']++;
        }
        int ans = 0;
        if (freqp == freqt)
        {
            ans++;
        }

        int l = 0, r = p;
        while (r < t)
        {
            freqt[txt[r] - 'a']++;
            freqt[txt[l] - 'a']--;
            if (freqp == freqt)
            {
                ans++;
            }
            l++;
            r++;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends