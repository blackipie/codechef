#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, rat = 0, max = 0;
        cin >> n;
        int l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        int r[n];
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((l[i] * r[i] > max) || (l[i] * r[i] == max && r[i] > rat))
            {
                max = l[i] * r[i];
                rat = r[i];
                ans = i;
            }
        }
        cout << ans + 1 << endl;
  
    }
    return 0;
}
