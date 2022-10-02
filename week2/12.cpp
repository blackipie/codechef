#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, n, k;
        cin >> m >> n >> k;
        cout << ((m > n * k) ? "YES" : "NO") << endl;
    }
    return 0;
}
