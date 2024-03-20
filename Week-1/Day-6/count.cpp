class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        vector<int> p(256, 0);
        vector<int> tx(256, 0);

        int ps = pat.size();
        int ts = txt.size();

        for (int i = 0; i < ps; i++)
        {
            p[pat[i]]++;
            tx[txt[i]]++;
        }

        int ans = 0;
        if (p == tx)
            ans++;

        int i = 0;
        int j = ps;

        while (j < ts)
        {
            tx[txt[j]]++;
            tx[txt[i]]--;

            if (p == tx)
                ans++;
            i++;
            j++;
        }

        return ans;
    }
};