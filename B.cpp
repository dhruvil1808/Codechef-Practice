#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s;
    int ans = 0, temp, flag;
    unordered_map<string, int> umap;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            temp = 0;
            flag = 1;
            cin >> s;
            if (umap.find(s) != umap.end())
            {
                ans += umap[s] / 2;
                continue;
            }
            temp += 2;
            if (s[0] == 'd' || s[0] == 'f')
                flag = 0;
            for (int i = 1; i < s.length(); i++)
            {
                if ((s[i] == 'd' || s[i] == 'f'))
                {
                    if (flag == 0)
                        temp += 4;
                    else
                        temp += 2;
                    flag = 0;
                }
                else
                {
                    if (flag == 0)
                        temp += 2;
                    else
                        temp += 4;
                    flag = 1;
                }
            }
            umap[s] = temp;
            ans += temp;
        }
        cout << ans << endl;
        umap.clear();
    }
    return 0;
}
