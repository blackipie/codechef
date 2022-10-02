#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float b, h, d;
        cin >> b;
        cout << fixed << setprecision(2) << (b < 1500 ? 2 * b : ((98 * b) / 100 + 500 + b)) << endl;
    }
    return 0;
}
