#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> pr(v.size());

        pr[0] = v[0];

        for (int i = 1; i < v.size(); i++)
        {
            pr[i] = pr[i - 1] + v[i];
        }

        vector<int> ans;
        int x = 0;
        for (int i = 0; i < v.size(); i++)
        {
            x = 0;
            for (int j = 0; j < v.size(); j++)
            {
                if (i == j)
                    continue;
                else
                {
                    x += pr[j];
                }
            }
            ans.push_back(x);
        }

        bool xx = false;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] >= 0)
            {
                x = false;
            }
            else
            {
                xx = true;
                break;
            }
        }

        if (xx == false)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}