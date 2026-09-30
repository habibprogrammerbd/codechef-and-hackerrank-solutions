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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(max(m,n) + 1);
        for (int i = 1; i <= m; i++)
        {
            cin >> v[i];
        }

        vector<int> ans;
        int l = 1;

        for (int i = 1; i <= n; i++)
        {
            if (v[l] == i)
            {
                l++;
            }
            else
            {
                ans.push_back(i);
            }

            if (!ans.empty())
            {
                if (ans.size() == k)
                {
                    break;
                }
            }
        }

        for (int x : ans)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}