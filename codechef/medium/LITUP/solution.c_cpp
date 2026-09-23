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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> p1;
        vector<int> p2;
        int mid = 0;
        if (n % 2 == 0)
        {
            mid = n / 2;
        }
        else
        {
            mid = (n / 2) + 1;
        }

        for (int i = 0; i < mid; i++)
        {
            p1.push_back(v[i]);
        }
        for (int i = mid; i < v.size(); i++)
        {
            p2.push_back(v[i]);
        }

        int p1_mid = p1.size() / 2, p2_mid = p2.size() / 2;

        if (p1_mid > k || p2_mid > k)
            cout << -1 << endl;
        else
        {
            int x1 = *min_element(p1.begin(), p1.end());
            int x2 = *min_element(p2.begin(), p2.end());

            cout << x1 + x2 << endl;
        }
    }

    return 0;
}