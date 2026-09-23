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

        int a, b;
        cin >> a >> b;
        if (a < b)
            cout << a << endl;
        else
        {
            int ans = 0;
            for (int i = 1; ans != a; i++)
            {
                if (i % b == 0)
                {
                    continue;
                }
                ans++;

                if (ans == a)
                {
                    cout << i << endl;
                }
            }
        }
    }

    return 0;
}